//
// Created by thepu on 12/11/2020.
//

#include "buyer.h"
#include "backpack.h"


bool buyer::buyDrug(drug d, backpack b) {
    if(b.drugExists(d))
    {
        b.addCash(d.getCost());
        b.removeDrug(d);
        return true;
    }
    return false;
}

float buyer::priceDrug(drug d) {
    return d.getCost() * .89;
}

bool buyer::sellDrug(drug d, backpack b) {
    if(b.getBalance() > d.getCost())
    {
        b.addDrug(&d);
        b.addCash((-1.0)*d.getCost()); // negative amt.
        return true;
    }
    return false;
}

bool buyer::buying(drug d) {

    return true;
}

bool buyer::selling(drug d) {
    return true;
}
