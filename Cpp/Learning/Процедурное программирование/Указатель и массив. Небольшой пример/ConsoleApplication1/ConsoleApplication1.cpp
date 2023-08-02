#include <iostream>
#include "Sales_item.h"
#include <string>
#include <bitset>



int main() {

    int k = 0, * p = &k;
    for (int i = 0; i < 6; i++) {
        *p = i;
        (*p == 5) ? std::cout << "5" << std::endl : std::cout << "not 5" << std::endl;

    }
   
   /*
    int s = 5,z=3,*p = &z;
    *p = s;
    std::cout << z << std::endl;
    std::cin.get();
    */
    return 0;
}