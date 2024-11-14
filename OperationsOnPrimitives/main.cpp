#include <iostream>

/**
 *  Operator Precedence Table (from highest to lowest):
    1. Parentheses: `()`
    2. Unary operators: `!`, `++`, `--`
    3. Multiplication, division, modulus: `*`, `/`, `%`
    4. Addition and subtraction: `+`, `-`
    5. Relational operators: `>`, `<`, `>=`, `<=`
    6. Equality operators: `==`, `!=`
    7. Logical AND: `&&`
    8. Logical OR: `||`
    9. Assignment: `=`, `+=`, `-=`, `*=`, `/=`, `%=`
 */

int main() {
    int a = 10;
    int b = 3;
    float x = 5.5;
    float y = 2.0;

    std::cout << "Integer Division: " << a / b << std::endl;  // Output will be 3, not 3.333
    std::cout << "Floating-point Division: " << x / y << std::endl;  // Output will be 2.75
    std::cout << "Floating-point Multiplication: " << x * y << std::endl;  // Output will be 11.0

    bool isAdult = true;
    bool hasPermission = false;

    // AND
    if (isAdult && hasPermission) {
        std::cout << "Access Granted!" << std::endl;
    } else {
        std::cout << "Access Denied!" << std::endl;
    }

    // OR
    if (isAdult || hasPermission) {
        std::cout << "Partial Access!" << std::endl;
    }

    // NOT
    if (!hasPermission) {
        std::cout << "No Permission!" << std::endl;
    }

    char letterA = 'A';
    char letterB = 'B';

    std::cout << "Is A less than B? " << (letterA < letterB ? "Yes" : "No") << std::endl;

    int num1 = 10;
    int num2 = 20;
    float f1 = 5.5;
    bool isGreater = num1 < num2;

    std::cout << "Integer Addition: " << num1 + num2 << std::endl;
    std::cout << "Integer Division: " << num1 / num2 << std::endl;
    std::cout << "Floating-point Multiplication: " << f1 * num2 << std::endl;
    std::cout << "Is num1 less than num2? " << (isGreater ? "True" : "False") << std::endl;
    std::cout << "Logical AND: " << ((num1 < num2) && (f1 > 2.0f)) << std::endl;

    return 0;
}
