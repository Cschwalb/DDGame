//
// Created by thepu on 12/12/2020.
//

#include "DayGenerator.h"
#include "drug.h"
void DayGenerator::generateDrugPrice(drug d) {
    float oldCost = d.getCost();
    oldCost = oldCost / 10;
    int evenOrOdd = std::rand() % 2 + 1;
    std::cout<<evenOrOdd<<std::endl;
    if(evenOrOdd % 2 == 0)
    {
        d.setCost(d.getCost() + oldCost);
    }
    else
    {
        d.setCost(d.getCost() - oldCost);
    }
    std::cout<<"Cost recently:  " <<d.getCost()<<std::endl;
}

DayGenerator::DayGenerator() {
    this->nCountOfDay = 0;
    generateDrugPrice( drug(drug::drugNames::weed, 20.00, 50));
}

void DayGenerator::fluctuateBackpack(backpack b) {
    auto load = b.getBackpack();
    for(drug d : load)
    {
        generateDrugPrice(d);
    }
}
