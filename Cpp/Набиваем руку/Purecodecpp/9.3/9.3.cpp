#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    int Array1[10]{};
    int Array2[10]{};
    int Array3[10]{};
    int len = sizeof(Array1) / sizeof(Array1[0]);
    double sum = 0;
    int min = 0;
    int max = 0;


    for (int i = 0; i < len; i++) {

        Array1[i] = 10 + rand()%21;
        Array2[i] = 10 + rand() % 21;

        std::cout << Array1[i] << " + " << Array2[i] << " = " << Array1[i]+Array2[i] << std::endl;


        Array3[i] = Array1[i] + Array2[i];
        sum += Array1[i] + Array2[i];

        if (Array3[min] > Array3[i]) min = i;
        if (Array3[max] < Array3[i]) max = i;

        if (i == 9) {
            std::cout << "\nСреднее арифметическое 3-го массива: " << sum / (i + 1) << std::endl;
            std::cout << "Наибольшее число 3-го массива: " << Array3[max] << std::endl;
            std::cout << "Наименьшее число 3-го массива: " << Array3[min] << std::endl;
        }


    }
    
}

