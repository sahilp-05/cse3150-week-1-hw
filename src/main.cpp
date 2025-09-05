#include <iostream>
#include "MathUtils.h"
#include "AdvancedMath.h"

int main() {
    int a = 3;
    int b = 4;

    std::cout << "a + b = " << MathUtils::add(a, b) << std::endl;
    std::cout << "a * b = " << MathUtils::multiply(a, b) << std::endl;
    std::cout << "a^2 = " << a << ": " << AdvancedMath::square(a) << std::endl;
    std::cout << "b^2 = " << b << ": " << AdvancedMath::square(b) << std::endl;

    return 0;
}
