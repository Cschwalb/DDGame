//
// Created by thepu on 12/7/2020.
//

#include "drug.h"


drug::drug() {
    this->m_sDrugName = "weed";
    this->m_dCost = 20.00;
    this->m_nCount = 1;
    this->m_eDrugName = drugNames::weed;
}

drug::drug(drug::drugNames enu, double cost, int nCount) {
    this->m_eDrugName = enu;
    this->m_dCost = cost;
    this->m_nCount = nCount;
}

double drug::getCost() {
    return this->m_dCost;
}

std::string drug::getName() {
    std::string sReturn;
   if(this->m_eDrugName == drugNames::weed)
       sReturn = "Weed";
   else if(this->m_eDrugName == drugNames::cocaine)
       sReturn = "Cocaine";
   else if(this->m_eDrugName == drugNames::ecstacy)
       sReturn = "Ecstacy";
   else if(this->m_eDrugName == drugNames::heroin)
       sReturn = "Heroin";
   else if(this->m_eDrugName == drugNames::oxy)
       sReturn = "Oxycodone";
   this->m_sDrugName = sReturn;
   return this->m_sDrugName;
}

double drug::generateAndSetPrice() {
    double nCostStart = this->getCost();
    int delta = rand() % static_cast<int>(this->m_dCost);
    if(delta %2 == 0)
        delta *=-1;
    std::cout<<delta<< std::endl;
    this->m_dCost += delta;
    return delta; // returns change
}

int drug::getCount() {
    return this->m_nCount;
}



