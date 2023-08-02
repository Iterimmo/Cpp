
#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    /// --- статический массив --- ///

    int arr[4];                   // первый способ инициализации
    int arr_1_1[] = {5,4,3,2,1};  // второй способ инициализации
    int arr_1_2[]{ 5,4,3,2,1 };   // третий способ инициализации

    // через массив и константу //

    const int size = 10; // обязательно константа !

    int arri[size];

    for (int i = 0; i < size; i++) {
        arri[i] = i;
    }
    
    // через массив и sizeof() //

    int arrs[]{ 1,2,3,4,5,6,7,8,9,10 };

    std::cout <<"Размер массива в байтах: " << sizeof(arrs) << std::endl;
    std::cout << "Размер массива: " << sizeof(arrs)/sizeof(int) << std::endl;

    for (int i = 0; i < sizeof(arrs) / sizeof(arrs[0]); i++) {
        std::cout << "Элемент массива: " << arrs[i] << std::endl;
    }

}

