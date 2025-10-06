#include <iostream>
#include "MathUtils.h"
#include "AdvancedMath.h"

int main() {
    int a = 3;
    int b = 4;

    std::cout << "a + b = " << MathUtils::add(a, b) << std::endl;
    std::cout << "a * b = " << MathUtils::multiply(a, b) << std::endl;
    std::cout << "square(a) = " << a << ": " << AdvancedMath::square(a) << std::endl;
    std::cout << "square(b) = " << b << ": " << AdvancedMath::square(b) << std::endl;

    return 0;
}
