#include "Header.h"
#include <iostream> // �������� iostream �����, � �� � main.cpp

namespace MyFunctions {
    void processNumber(int num) {
        static int staticVar = 0;
        std::cout << "Sum: " << num + staticVar << std::endl;
        staticVar = num;
    }
}