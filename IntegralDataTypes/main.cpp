#include <iostream>

int main()
{
    int age = 25;
    int initial = 'A';
    int isAdult = age >= 18;

    std::cout << "Age: " << age << std::endl;
    std::cout << "Initial: " << initial << std::endl;
    std::cout << "Is adult: " << (isAdult ? "true" : "false") << std::endl;

    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " bytes" << std::endl;

    std::cout << "Size of total:\t " << 
        sizeof(age) + sizeof(initial) + sizeof(isAdult) 
        << " bytes" << std::endl;

    return 0;
}
