// 2.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{

    typedef double dbl;  // dlb - синоним для double
    typedef dbl db, *d; // db - синоним для double, *d - синоним для double*

    using ln = long;

    db pi = 3.14;
    ln s = 15;
    char k = 5;

    typedef char *pstring; 
    const pstring cstr = 0;  // cstr - константный указатель на char
    const pstring* ps;       // ps - указатель на константный указатель на тип char

   // const int cstr = 0;

  //  std::cout << "cstr: " << (int)*cstr << std::endl;

    auto iii = 0, * pr = &iii; // i - int, pi - указатель на тип int
  //  auto sz = 0, pz = 3.14 // Ошибка: sz - int, pz - double 
    const int ci = 0, & cj = ci;
    decltype(ci) x = 0; // x имеет тип const int
    decltype(cj) y = x; // y имеет тип const int & и связана с x
  //  decltype(cj) z; // Ошибка: z - должна быть инициализирована, т.к. cj - ссылочный тип

    int i = 42, * p = &i, & r = i; 
    decltype (r + 0) b; // b - type int.
                        // decltype(r) вернет ссылочный тип int&
                        // если необходим ТИП, на который ссылается  ссылка, можно использовать (r+0)
   // decltype (*p) c; // Error - с имеет тип int& и требует инициализации

    decltype(i) x = 3.14;
    decltype(pi) x = 4;

}

