//
// Created by thepu on 12/7/2020.
//

#include <sstream>
#include "backpack.h"

backpack::backpack() {
    this->m_lDrugs.push_front(drug(drug::drugNames::weed, 25, 1)); // start with a gram.
}

backpack::backpack(std::list<drug> lst, std::list<drug> mLDrugs) : m_lDrugs(mLDrugs) {
    for(drug item : lst)
    {
        this->m_lDrugs.push_front(item);
    }
}

std::list<drug> backpack::getBackpack() {
    return this->m_lDrugs;
}

std::string backpack::listContents() {
    std::string sBackpack = "Backpack Contents";
    auto s = std::stringstream();
    for( drug d : this->m_lDrugs)
    {
        s<<"Drug in backpack: " << d.getName() << std::endl;
    }
    return s.str();
}

bool backpack::addDrug(drug *d) {
    this->m_lDrugs.push_front(*d);
    return true;
}

bool backpack::removeDrug(drug d) {
    for( drug item : this->m_lDrugs)
    {
        if(item.operator==(d)) {
            this->m_lDrugs.remove(d);
            return true;
        }
    }
    return false;
}

bool backpack::drugExists(drug d) {
    for( drug D : this->m_lDrugs)
    {
        if(d.operator==(D))
            return true;
    }
    return false;
}

int backpack::numberOfDrug(drug d) {
    for( drug D : this->m_lDrugs) {
        if (d.operator==(D))
            return d.getCount();
    }
    return 0;

}
