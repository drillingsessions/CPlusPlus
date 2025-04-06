#include <iostream>
#include <cstdint>

void findOutMyEndianness()
{
    uint32_t value = 0x01020304;
    uint8_t* ptr = reinterpret_cast<uint8_t*>(&value);

    if (ptr[0] == 0x04) {
        std::cout << "System is Little-Endian\n";
    } else if (ptr[0] == 0x01) {
        std::cout << "System is Big-Endian\n";
    } else {
        std::cout << "Unknown Endianness\n";
    }
}
int main() {
    int a = 42;
    short int b = 25;
    long c = 31;
    long long d = 10;
    
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of short int: " << sizeof(short) << " bytes" << std::endl;
    std::cout << "Size of long int: " << sizeof(long) << " bytes" << std::endl;
    std::cout << "Size of long long: " << sizeof(long long) << " bytes" << std::endl;

    findOutMyEndianness();
    return 0;
}
