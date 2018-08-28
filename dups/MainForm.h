/* 
 * File:   MainForm.h
 * Author: danny
 *
 * Created on August 27, 2018, 3:19 PM
 */

#ifndef MAINFORM_H
#define MAINFORM_H

#include <nanogui/nanogui.h>
#include <memory>

class MainForm {
public:
    MainForm();
    virtual ~MainForm();
private:
    std::unique_ptr<nanogui::Screen> _screen;
    
};
#endif /* MAINFORM_H */

