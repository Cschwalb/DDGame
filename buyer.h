//
// Created by thepu on 12/11/2020.
//

#ifndef DRUGDEALERSIM_BUYER_H
#define DRUGDEALERSIM_BUYER_H

#include "drug.h"
class buyer {
public:
    // list of things buyer will purchase for price.
    // vector???
    bool buyDrug(drug d);
    float priceDrug(drug d);
    bool sellDrug(drug d);
    bool buying(drug d);
    bool selling(drug d);
};


#endif //DRUGDEALERSIM_BUYER_H
