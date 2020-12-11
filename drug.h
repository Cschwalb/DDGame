//
// Created by thepu on 12/7/2020.
//

#ifndef DRUGDEALERSIM_DRUG_H
#define DRUGDEALERSIM_DRUG_H
#include <iostream>

class drug {
private:
    double m_dCost;
    std::string m_sDrugName;
    int m_nCount;
public:
    enum class drugNames {
        weed = 0,
        cocaine = 1,
        ecstacy = 2,
        oxy = 3,
        heroin = 4
    };
    drug();
    drug(drugNames &, double cost, int nCount);
    double getCost();
    std::string getName();
    double generateAndSetPrice();
    inline bool operator==(const drug drug1)
    {
        if(this->m_sDrugName == drug1.m_sDrugName)
            return true;
        else
            return false;
    };
    int getCount();



    };
};


#endif //DRUGDEALERSIM_DRUG_H
