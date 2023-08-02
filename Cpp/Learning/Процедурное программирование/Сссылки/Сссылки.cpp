// Сссылки.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string>
#include <string.h>
// Передача в функцию 

void Foo_1(int a) {
    a = 1;
}
void Foo_2(int& a) {
    a = 2;
}

void Foo_3(int* a) {
    (*a) = 3;
}


// Несколько значений

void Foo(int& a, int& b, int& c) {
    a = 1;
    b = 2;
    c = 3;
}
template <typename T1,typename T2>
void Swap(T1& a, T2& b) {
    T1 temper = a;
    a = b;
    b = temper;
}
int main()
{
    int a = 14;

    int* pa = &a;
    
    int& refa = a; // ссылка 

    int& refpa = *pa; // ссылка на указатель

    int* ppa = &refa; // указатель на ссылку на переменную типа инт
    int* pppa = &refpa; // указатель на ссылку на указатель на переменную типа инт
    std::cout << "a\t" << a << std::endl; // 14
    *pppa = 5;
    std::cout << "a\t" << a << std::endl; // 5

    std::cout << "-----------------------------------" << std::endl;

    int val = 100;
    std::cout << "Value\t" << val << std::endl;
    Foo_1(val);
    std::cout << "Foo1\t" << val << std::endl;
    Foo_2(val);
    std::cout << "Foo2\t" << val << std::endl;
    Foo_3(&val);
    std::cout << "Foo3\t" << val << std::endl;

    std::cout << "-----------------------------------" << std::endl;

    int a_1 = 100, b = a_1, c = b;
    std::cout << "a_1\t" << a_1 << std::endl;
    std::cout << "b\t" << b << std::endl;
    std::cout << "c\t" << c << std::endl;
    Foo(a_1, b, c);
    std::cout << "\na_1\t" << a_1 << std::endl;
    std::cout << "b\t" << b << std::endl;
    std::cout << "c\t" << c << std::endl;
    std::cout << "-----------------------------------" << std::endl;

    int first = 50, second = 10;
    std::cout << "first\t" << first << std::endl;
    std::cout << "second\t" << second << std::endl;
    Swap(first, second);
    std::cout << "\nfirst\t" << first << std::endl;
    std::cout << "second\t" << second << std::endl;
    std::cout << "-----------------------------------" << std::endl;

    std::string s1 = "first", s2 = "second";
    Swap(s1, s2);

    std::cout << "s1\t" << s1 << std::endl;
    std::cout << "s2\t" << s2 << std::endl;
    double pi = 3.14;
    Swap(first, pi);
    std::cout << "\npi\t" << pi << std::endl;
    std::cout << "first\t" << first << std::endl;
}
