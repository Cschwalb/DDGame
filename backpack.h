//
// Created by thepu on 12/7/2020.
//

#ifndef DRUGDEALERSIM_BACKPACK_H
#define DRUGDEALERSIM_BACKPACK_H
#include <iostream>
#include <list>
#include "drug.h"

class backpack {
    std::list<drug> m_lDrugs;

public:
    backpack();
    backpack(std::list<drug> lst);
    std::list<drug> getBackpack();
    std::string listContents();
    bool addDrug(drug *d);
    bool removeDrug(drug d);
    bool drugExists(drug d);
    int numberOfDrug(drug d);
};


#endif //DRUGDEALERSIM_BACKPACK_H
