/* 
 * File:   MainForm.cpp
 * Author: danny
 * 
 * Created on August 27, 2018, 3:19 PM
 */

#include "MainForm.h"

MainForm::MainForm() : _screen(new nanogui::Screen())
{    
    nanogui::init();
    
    nanogui::FormHelper form(_screen.get());    
    form.addGroup("lala");
    nanogui::mainloop();
}

MainForm::~MainForm()
{
    nanogui::shutdown();
}

