//
// Created by thepu on 12/7/2020.
//

#ifndef DRUGDEALERSIM_DRUG_H
#define DRUGDEALERSIM_DRUG_H
#include <iostream>

class drug {

public:
    enum class drugNames {
        weed = 0,
        cocaine = 1,
        ecstacy = 2,
        oxy = 3,
        heroin = 4
    };
private:
    double m_dCost;
    std::string m_sDrugName;
    int m_nCount;
    drugNames m_eDrugName;
public:
    drug();
    drug(enum class drugNames e);
    drug(int drug);
    drug(const drug& drug1);
    drug(drugNames, double cost, int nCount);
    double getCost();
    std::string getName();
    double generateAndSetPrice();
    inline bool operator==(drug &drug1)
    {
        if(this->m_eDrugName == drug1.m_eDrugName)
            return true;
        else
            return false;
    };
    inline bool operator!=(drug &drug1)
    {
        if(this->m_eDrugName != drug1.m_eDrugName)
            return true;
        else
            return false;
    };
    bool operator == (const drug& d) const
    {
      if(this->m_eDrugName == d.m_eDrugName)
          return true;
      else
          return false;
    };

    bool operator != (const drug& d) const
    {
        return !operator==(d);
    };
    int getCount();
    void setCost(double cost);

};


#endif //DRUGDEALERSIM_DRUG_H
