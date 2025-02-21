#include <iostream>
#include "utils.h"

int main()
{
    int a = 124;
    int b = 466;
    std::cout << "a*b=" << multiply(a,b) << std::endl;
    std::cout << "a+b="  << add(a, b) << std::endl;
    return 0;
}