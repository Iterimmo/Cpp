#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");

    int less;
    int hight;
    int sum_nech = 0;
    std::cout << "Введите нижнее и верхнее значение диапазона через пробел: ";
    std:: cin >> less >> hight;

    if (less % 2 == 0) 
        less++;
    for (int i = less; i <= hight; i += 2) {
        sum_nech += i;
        std::cout << sum_nech;
    }


}
