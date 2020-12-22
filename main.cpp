#include <iostream>
// drug
// user
// user has backpack
// user has cash
// cops sieze bags w/ drugs.
#include "drug.h"
#include "backpack.h"
#include "DayGenerator.h"
int main() {
    std::cout << "Hello, drug world!" << std::endl;
    DayGenerator *day = new DayGenerator();
    auto drugHeroin = new drug(drug::drugNames::heroin, 199, 1);
    backpack b = backpack();
    b.addDrug(drugHeroin);
    std::cout<<b.listContents()<<std::endl;
    std::cout<<drugHeroin->getCost()<<std::endl;
    day->fluctuateBackpack(b);
    std::cout<<b.listContents()<<std::endl;
    return 0;
}
