//
// Created by Caleb on 8/24/2023.
//

#ifndef DRUGDEALERSIM_GUI_H
#define DRUGDEALERSIM_GUI_H
#include "backpack.h"

class GUI {
private:
    int nChoice;
    backpack bBag;
public:
    GUI(backpack &bag);
    void printmenu();
    int getchoice();


};


#endif //DRUGDEALERSIM_GUI_H
