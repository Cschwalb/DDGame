//
// Created by thepu on 12/7/2020.
//

#ifndef DRUGDEALERSIM_DRUG_H
#define DRUGDEALERSIM_DRUG_H
#include <iostream>

class drug {

public:
    enum class drugNames {
        weed = -1,
        cocaine = 0,
        ecstacy = 1,
        oxy = 2,
        heroin = 3
    };
private:
    double m_dCost;
    std::string m_sDrugName;
    int m_nCount;
    drugNames m_eDrugName;
public:
    drug();
    drug(drugNames, double cost, int nCount);
    double getCost();
    std::string getName();
    double generateAndSetPrice();
    inline bool operator==(drug drug1)
    {
        if(this->m_eDrugName == drug1.m_eDrugName)
            return true;
        else
            return false;
    };
    int getCount();



};


#endif //DRUGDEALERSIM_DRUG_H
