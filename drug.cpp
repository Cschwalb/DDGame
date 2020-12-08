//
// Created by thepu on 12/7/2020.
//

#include "drug.h"


drug::drug() {
    this->m_sDrugName = "weed";
    this->m_dCost = 20.00;
    this->m_nCount = 1;
}

drug::drug(const std::string & sName, double cost, int nCount) {
    this->m_sDrugName = sName;
    this->m_dCost = cost;
    this->m_nCount = nCount;
}

double drug::getCost() {
    return this->m_dCost;
}

std::string drug::getName() {
    return this->m_sDrugName;
}

double drug::generateAndSetPrice() {
    double nCostStart = this->getCost();
    int delta = rand() % static_cast<int>(this->m_dCost);
    std::cout<< delta<< std::endl;
    this->m_dCost += delta;
    return delta; // returns change
}

int drug::getCount() {
    return this->m_nCount;
}
