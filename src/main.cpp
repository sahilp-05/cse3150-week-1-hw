#include <iostream>
#include "MathUtils.h"
#include "AdvancedMath.h"

int main() {
    int a = 6;
    int b = 7;

    cout << "a + b = " << MathUtils::add(a, b) << endl;
    cout << "a * b = " << MathUtils::multiply(a, b) << endl;
    cout << "a^2 = " << a << ": " << AdvancedMath::square(a) << endl;
    cout << "b^2 = " << b << ": " << AdvancedMath::square(b) << endl;

    return 0;
}
