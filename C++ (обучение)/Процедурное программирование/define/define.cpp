#include <iostream>              // подключение библиотеки
#define PI 3.14                  // Задание константы
#define mult(x,y) ((x)*(y))      // макрос-функция 1
#define newpart std::cout<<"\n------"<<std::endl // макрос-функция 2
//#define DEBUG
#define DEBUG_num 10

int main() {
    setlocale(LC_ALL, "ru");
    std::cout << mult(2, 7) << std::endl;
    newpart;

#ifndef DEBUG
    std::cout << "Дебаг не определен" << std::endl;
#else
    std::cout << "Дебаг определен" << std::endl;

#endif // DEBUG

    newpart;

#ifdef DEBUG
    std::cout << "Дебаг определен" << std::endl;
#else
    std::cout << "Дебаг не определен" << std::endl;

#endif // DEBUG

    newpart;

#if DEBUG_num <10
    std::cout << "cout 1" << std::endl;
#elif DEBUG_num > 10
    std::cout << "cout 2" << std::endl;
#elif DEBUG_num == 10
    std::cout << "cout 3" << std::endl;
#else
    std::cout << "Что-то пошло не по плану..." << std::endl;
#endif
    newpart;

    (DEBUG_num < 5) ? (std::cout << "Debug меньше 5" << std::endl) : (std::cout << "Debug больше 5" << std::endl);

    int a = 5;

    (a < 5) ? (std::cout << "a меньше 5") : (a > 5) ? (std::cout << "a больше 5") : (std::cout << "a равно 5" << std::endl);
}

    

