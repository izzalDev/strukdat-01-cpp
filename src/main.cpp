// src/main.cpp
#include <iostream>

int main()
{
    int a = 10;
    int b = 30;
    int c = a + b;
    int d = b - a;
    float f = a / b;
    std::cout << "Nilai a :" << a << std::endl;
    std::cout << "Nilai b :" << b << std::endl;
    std::cout << "Nilai c :" << c << std::endl;
    std::cout << "Nilai d :" << d << std::endl;
    std::cout << "Nilai f :" << f << std::endl;
    std::string nim = "A11.2000.12070";
    std::string name = "Rizal Fadlullah";
    std::cout << "NIM/NAMA : " << nim + " " + name << std::endl;
    char ya = 'Y';
    if (ya == 'Y')
    {
        std::cout << "BENAR !" << std::endl;
    }
    bool oke = true;
    int k = 0;
    while (oke)
    {
        k++;
        std::cout << k << " SAYA BELAJAR PROGRAM" << std::endl;
        if (k == 10)
        {
            oke = false;
            // break;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << " UDINUS" << std::endl;
    }
    int j = 0;
    do
    {
        j++;
        std::cout << j << " UDINUS" << std::endl;
    } while (j < 10);
    return 0;
}