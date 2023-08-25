//
// Created by Caleb on 8/24/2023.
//

#include "GUI.h"
#include <iostream>
int GUI::getchoice() {
    std::cin>>this->nChoice;
    return this->nChoice;
}

void GUI::printmenu() {
    std::cout<<"[1]  Buy" <<std::endl<<"[2]  Sell"<<std::endl<<
    "[3]  Show inventory"<<std::endl<<"Enter choice:  ";
}

GUI::GUI(backpack &bag) {
    this->bBag = bag;
    this->nChoice = -1;
}
