#include <iostream>
// drug
// user
// user has backpack
// user has cash
// cops sieze bags w/ drugs.
#include "drug.h"
#include "backpack.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    auto x = drug();
    x.generateAndSetPrice();
    std::cout<<x.getCost()<<std::endl;
    auto b = backpack();
    std::cout<<"caleb "<<std::endl;
    auto nD = new drug(drug::drugNames::cocaine, 90, 1);
    b.addDrug(nD);
    std::cout<<b.listContents() << std::endl;
    return 0;
}
