//
// Created by thepu on 12/7/2020.
//

#include "backpack.h"

backpack::backpack() {
    this->m_lDrugs.push_front(drug("Weed", 25, 1)); // start with a gram.
}

backpack::backpack(std::list<drug> lst) {
    this->m_lDrugs = lst;
}

std::list<drug> backpack::getBackpack() {
    return this->m_lDrugs;
}

void printDrug(drug d)
{
    std::cout<<"Drug in backpack: " << d.getName() << std::endl;
}

std::string backpack::listContents() {
    std::for_each(this->m_lDrugs.begin(), this->m_lDrugs.end(), printDrug);
}

bool backpack::addDrug(drug d) {
    this->m_lDrugs.push_front(d);
    return true;
}

bool backpack::removeDrug(drug d) {

    return false;
}

bool backpack::drugExists(drug d) {
    for(const drug D : this->m_lDrugs)
    {
        if(d.operator==(D))
            return true;
    }
    return false;
}

int backpack::numberOfDrug(drug d) {
    for(const drug D : this->m_lDrugs)
        if(d.operator==(D))
            return d.getCount();
}
