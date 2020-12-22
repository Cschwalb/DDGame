//
// Created by thepu on 12/12/2020.
//

#ifndef DRUGDEALERSIM_DAYGENERATOR_H
#define DRUGDEALERSIM_DAYGENERATOR_H

#include "drug.h"
#include <vector>
#include "backpack.h"
class DayGenerator {
private:
    int nCountOfDay;
    std::vector<drug, int>drugType();
    std::vector<drug::drugNames, float>DrugCost();

public:
    DayGenerator();
    void generateDrugPrice(drug d);
    void fluctuateBackpack(backpack b);
};


#endif //DRUGDEALERSIM_DAYGENERATOR_H
