// Генератор случайных чисел.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "ru"); // русский язык != кракозябра
    srand(time(NULL)); // каждый раз новые значения
   
    int const SIZE = 10; // размер массива
    int arr[SIZE]; // объявляем массив

    int count = 0,limit=0; // счетчики:
                           //limit - для обратной связи, если что-то случилось с программой;
                           //count - для обращения к предыдущим элементам массива

    int left, right;      // границы [left,right)

    std::cout << "Введите левую границу диапазона: ";
    std::cin >> left; 

    std::cout << "Введите правую границу диапазона (невключительно): ";
    std::cin >> right; 

    std::cout << "\n"<<std::endl;

    for (int i = 0; i < SIZE; i++) {
       
       arr[i] = rand() % (right-left) + left;

        while(1){
            
            if (limit > (SIZE * SIZE * SIZE * SIZE)) {
                std::cout << "\nПревышено время обработки. Проверьте вводимые данные." << std::endl;
                exit(1);
            }

            if (count == i) {
                count = 0;
                break;
            }

            if (arr[i] == arr[i - count - 1]) {
                arr[i] = rand() % (right - left) + left;
                count = 0;
                continue;
            }
            
            count++;
            limit++;
        }


        std::cout << i<<" элемент массива: " << arr[i] << std::endl;
    }
    
    std::cout << "\nМассив с уникальными случайными значениями сгенерирован успешно" << std::endl;
    return(0);
}


