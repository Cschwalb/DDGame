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
    std::cout<<x.getCost();
    auto b = backpack();
    std::cout<<  b.listContents();
    return 0;
}
