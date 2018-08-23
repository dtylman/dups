/* 
 * File:   main.cpp
 * Author: danny
 *
 * Created on August 23, 2018, 4:28 PM
 */

#include <iostream>
#include <Poco/Path.h>
#include <Poco/Thread.h>
#include <nanogui/nanogui.h>


using namespace std;

class Worker : public Poco::Runnable
{
public:

    Worker(nanogui::ProgressBar* pb) : _pb(pb)
    {
    }

    virtual void run()
    {
        _running = true;
        for (float i = 0; i < 1; i += 0.01) {
            _pb->setValue(i);
            Poco::Thread::sleep(100);
            if (!_running) {
                return;
            }
        }
        _pb->setValue(0);
    }

    void stop()
    {
        _running = false;
    }
private:
    nanogui::ProgressBar* _pb;
    bool _running = false;
};

int main(int, char**)
{
    Poco::Thread thread;
    try {
        nanogui::init();
        {
            using namespace nanogui;

            enum test_enum
            {
                Item1 = 0,
                Item2,
                Item3
            };

            bool bvar = true;
            int ivar = 12345678;
            double dvar = 3.1415926;
            float fvar = (float) dvar;
            std::string strval = Poco::Path::self();
            test_enum enumval = Item2;
            Color colval(0.5f, 0.5f, 0.7f, 1.f);

            bool use_gl_4_1 = false; // Set to true to create an OpenGL 4.1 context.
            Screen *screen = nullptr;

            if (use_gl_4_1) {
                // NanoGUI presents many options for you to utilize at your discretion.
                // See include/nanogui/screen.h for what all of these represent.
                screen = new Screen(Vector2i(500, 700), "NanoGUI test [GL 4.1]",
                                    /*resizable*/true, /*fullscreen*/false, /*colorBits*/8,
                                    /*alphaBits*/8, /*depthBits*/24, /*stencilBits*/8,
                                    /*nSamples*/0, /*glMajor*/4, /*glMinor*/1);
            }
            else {
                screen = new Screen(Vector2i(500, 700), "NanoGUI test",false);
                
            }

            bool enabled = true;
            FormHelper *form = new FormHelper(screen);
            nanogui::ref<Window> window = form->addWindow(Vector2i(0, 0), "Title");
            form->addGroup("Basic types");
            form->addVariable("bool", bvar);
            form->addVariable("string", strval);

            form->addGroup("Validating fields");
            form->addVariable("int", ivar)->setSpinnable(true);
            form->addVariable("float", fvar);
            form->addVariable("double", dvar)->setSpinnable(true);

            form->addGroup("Complex types");
            form->addVariable("Enumeration", enumval, enabled)
                    ->setItems({"Item 1", "Item 2", "Item 3"});
            form->addVariable("Color", colval)
                    ->setFinalCallback([](const Color & c)
                    {
                        std::cout << "ColorPicker Final Callback: ["
                                << c.r() << ", "
                                << c.g() << ", "
                                << c.b() << ", "
                                << c.w() << "]" << std::endl;
                    });

            form->addGroup("Other widgets");
            ProgressBar* pbar = new ProgressBar(form->window());
            form->addWidget("Progress", pbar);
            Worker worker(pbar);
            form->addButton("PB Button", [&]()
            {
                if (!thread.isRunning()) {
                    thread.start(worker);
                }
            });
            form->addButton("A button", [&]()
            {
                std::cout << "Button pressed. and bvar is " << bvar << std::endl; 
                
            });
            
            screen->setVisible(true);
            screen->performLayout();
            window->layout();

            nanogui::mainloop();
            worker.stop();
        }

        thread.join();
        nanogui::shutdown();
    }
    catch (...) {
        std::cout << "Exception" << std::endl;
        
        
    }
    return 0;
}

