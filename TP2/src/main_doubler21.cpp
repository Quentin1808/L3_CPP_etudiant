#include "Doubler.hpp"

#include <iostream>

int main() {
    std::cout << doubler(21) << std::endl;
    std::cout << doubler(21.f) << std::endl;

    struct A{
      int _x;
    };
 
    A a1;
    
    A* pa;

    a1._x = 14;
    std::cout << "La valeur _x de a1 vaut : " << a1._x << std::endl;
    
    pa = &a1;
    std::cout << "La valeur de pa vaut : " << pa->_x << std::endl;
    
    pa->_x = 21;
    std::cout << "La nouvelle valuer de pa vaut : " << pa->_x << std::endl;

    std::cout << "La valeur _x de a1 vaut : " << a1._x << std::endl;
    
    return 0;
}

