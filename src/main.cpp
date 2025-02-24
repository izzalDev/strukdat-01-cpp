// src/main.cpp
#include <iostream>

void displayMenu()
{
    std::cout << "============================\n";
    std::cout << "       MENU MAKANAN        \n";
    std::cout << "============================\n";
    std::cout << "1. NASI RAMES\n";
    std::cout << "2. NASI RAWON\n";
    std::cout << "3. NASI GORENG\n";
    std::cout << "4. NASI GUDEG\n";
    std::cout << "5. KELUAR\n";
    std::cout << "============================\n";
    std::cout << "Pilih menu (1-5): ";
}

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
    // 1. NASI RAMES
    // 2. NASI RAWON
    // 3. NASI GORENG
    // 4. NASI GUDED
    // 5. KELUAR
    int choice;
    do
    {
        displayMenu();
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "Anda memilih NASI RAMES.\n";
            break;
        case 2:
            std::cout << "Anda memilih NASI RAWON.\n";
            break;
        case 3:
            std::cout << "Anda memilih NASI GORENG.\n";
            break;
        case 4:
            std::cout << "Anda memilih NASI GUDEG.\n";
            break;
        case 5:
            std::cout << "Terima kasih! Keluar dari program.\n";
            break;
        default:
            std::cout << "Pilihan tidak valid, silakan coba lagi.\n";
        }
        std::cout << "\n";
    } while (choice != 5);
    return 0;
}