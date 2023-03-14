// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define nextpart std::cout << "-----------------------------------------" << std::endl
#include <iostream>

int main()
{
    int val = 1024; 
    int *pi = &val; // pi указывает на переменную типа int
    int **ppi = &pi; // ppi указывает на указатель на переменную типа int 

    std::cout << "pi: " << pi << " ppi: " << *ppi << std::endl;
    
    nextpart;

    int i = 42; 
    int* p;       // указатель на тип int 
    int*& r = p;  // r ссылка на указатель p 
    r = &i;       // присвоение &i ссылке r делает p указателем на i
                  // обращение к значению r дает i, объект, на который указывает p
    std::cout << "r before: " << *r << std::endl; // 42
    *r = 0;       // изменяем значение i на 0
    std::cout << "r after: " << *r << std::endl; // 0

    nextpart;


    double dval = 3.14;
    const int& ri = dval;

    dval++;
    std::cout << "ri: " << ri <<  " dval :" << dval << std::endl;

    nextpart;

    int i2 = 42;
    int& r1 = i2;
    const int& r2 = i2;

    i = 0; // теперь значение i = 0
    //r2 = 0; // ошибка r2 const

    std::cout << "r2: " << r2 << " i :" << i << std::endl;

    r1 = 0; // изменяя ссылку на i, мы автоматически изменили нашу константу

    std::cout << "r2: " << r2 << " i :" << i << std::endl;



    nextpart;

    // --- указатель на константу --- //

    const double pi_2 = 3.14; // pi - конст

    // double* ptr = &pi; // ptr неконстанта, поэтому ошибка

    const double *ptr_2 = &pi_2; // всё окей

    // *ptr_2 = 42; // ptr_2 константа, поэтому ошибка

    std::cout << "ptr_2 to pi_2: " << *ptr_2 << std::endl;

    double kvadr = 5.14;
    ptr_2 = &kvadr; // изменили объект, к которому "привязан" указатель, т.е. нашу константу

    std::cout << "ptr_2 to kvadr: " << *ptr_2 <<std::endl;
    kvadr = 7;
    std::cout << "ptr_2 to kvadr (2): " << *ptr_2 << std::endl; // еще раз это сделали, изменяя сам объект, с которым связана константа.

    // *ptr_2 += 1; // однако вот так сделать мы не можем

    nextpart;

    // константный указатель //

    int errNumb = 5;
    int* const curErr = &errNumb; // currErr всегда (!) будет указывать на errNumb
    const double pi_3 = 3.14; 
    const double* const pip = &pi_3; // pip константный указатель на константный объект

    std::cout << "CurrErr: " << *curErr << std::endl;

    errNumb = 7; // изменили значение errNumb

    std::cout << "CurrErr: " << *curErr << std::endl; // изменилось и значение константного указателя
    
    nextpart;

    int j = 42;
    int f2 = 50;
    const int* k1 = &j;       // указатель на константу

    k1 = &f2;                 // допустимо
   // *k1 += 1;               // недопустимо

    int* const k2 = &j;       // константный указатель

   // k2 = &f2;               // недопустимо
    *k2 += 1;                 // допустимо

    const int* const k3 = &j; // константный указатель на константу 

   // k3 = &f2;               // недопустимо
   // *k3 += 1;               // недопустимо
   
}

