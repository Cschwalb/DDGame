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

drug::drug(const drug& drug1)
{
    this->m_sDrugName = drug1.m_sDrugName;
    this->m_dCost = drug1.m_dCost;
    this->m_nCount = drug1.m_nCount;
    this->m_eDrugName = drug1.m_eDrugName;
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

void drug::setCost(double cost) {
    this->m_dCost = cost;
}



drug::drug(drug::drugNames e) {
    if(e == drug::drugNames::weed)
    {
        this->m_eDrugName = drug::drugNames::weed;
        this->m_dCost = 20.00;
        this->m_nCount = 1;
        this->m_sDrugName = "Weed";
    }
    else if(e == drug::drugNames::cocaine)
    {
        this->m_eDrugName = drug::drugNames::cocaine;
        this->m_dCost = 60.00;
        this->m_nCount = 1;
        this->m_sDrugName = "Coke";
    }
    else if(e == drug::drugNames::ecstacy)
    {
        this->m_eDrugName = drug::drugNames::ecstacy;
        this->m_dCost = 35.00;
        this->m_nCount = 1;
        this->m_sDrugName = "ecstacy";
    }
    else if( e == drug::drugNames::heroin)
    {
        this->m_eDrugName = drug::drugNames::heroin;
        this->m_dCost = 45.00;
        this->m_nCount = 1;
        this->m_sDrugName = "Heroin";
    }
    else if(e == drug::drugNames::oxy)
    {
        this->m_eDrugName = drug::drugNames::oxy;
        this->m_dCost = 10.00;
        this->m_nCount = 1;
        this->m_sDrugName = "Oxycodone";
    }
}

drug::drug(int drugNumb) {
    if(drugNumb == 0)
        new drug(drug::drugNames::weed);
    else if(drugNumb == 1)
        new drug(drug::drugNames::cocaine);
    else if(drugNumb == 2)
        new drug(drug::drugNames::ecstacy);
    

}



