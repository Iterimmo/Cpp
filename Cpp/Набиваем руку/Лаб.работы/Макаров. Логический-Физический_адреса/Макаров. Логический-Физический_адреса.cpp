#include <string>
#include <iostream>

#define nexttask std::cout<<"\n-------------------------------------------\n"<<std::endl
#define nextline std::cout<<"\n"<<std::endl
// Умножить на 10 + смещение 
// XXXX0 + YYYY = физический адрес

void dec2bin(int a)
{
    if (a != 0) dec2bin(a / 2);
    if (a != 0) std::cout << a % 2;
}


int main(int argc, char* argv[])
{
    int segment = 0x5E200; // сразу умножим на 10
    int bias = 0xFF37;     // смещение
    std::cout << "\nIn hex :" << std::hex << segment + bias << "\nIn dec :" << std::dec << segment + bias << std::endl << std::endl;

    nexttask;
    int BX = 0x4BB5;

    dec2bin(BX);
    nexttask;

    int aa = 1; // любое 4-байтное число
    char* pp = (char*)&aa;

    std::cout << pp[0];
    std::cout << pp[1];
    std::cout << pp[2];
    std::cout << pp[3];
    std::cout << "\n";

    if (pp[0] != 0) {
        std::cout << "Little-endian";
    }
    else if (pp[3] != 0) {
        std::cout << "Big-endian";
    }
    else {
        std::cout << "Mixed-endian";
    }
}







