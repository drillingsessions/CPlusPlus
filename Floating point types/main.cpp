#include <iostream>
#include <iomanip>

int main() 
{
    float floatValue = 0.1;
    double doubleValue = 0.1;

    std::cout << std::setprecision(10) << "Float value: " << floatValue << std::endl;
    std::cout << std::setprecision(20) << "Double value: " << doubleValue << std::endl;

    return 0;
}
