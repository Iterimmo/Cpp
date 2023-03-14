// Функции.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

    /// ---------------- Передача по значению ---------------- ///

void foo() {
    std::cout << "Function\n-------" << std::endl;
}

int sum(int a, int b) {
    return a + b;
}


// Передача массива в функцию //

void FillArr(int arr[], const int size) {      // передается не сам массив, а указатели на массив

    for (int i = 0; i < size; i++) {
        arr[i] = rand()%10;
    }

}


 
void PrintArray(int arr[], const int size) {

    int a = sizeof(arr); // 4 байта
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << std::endl;
    }

}


/// ---------------- Перегрузка функции ---------------- ///

int Sum(int a, int b) {
    return a + b;
}
double Sum(double a, double b) {
    return a + b;
}

int Sum(int a, int b, int c) {
    a = b * c;
    return a + b + c;
}

/// ---------------- Шаблоны функции ---------------- ///

template <typename T> 
T Summator(T a, T b) {
    return a + b;
}

template <typename T1, typename T2>
T1 Summator(T1 a, T2 b) {
    return a + b;
}

/// ---------------- Рекурсия ---------------- ///
int rec(int a) {

    if (a < 1)
        return 0;

    a--;
    std::cout << "recursian var is " << a << std::endl;
    return rec(a);
}

int fact(int N) {
    
    if (N == 0)
        return 0;
    if (N == 1)
        return 1;

    return N * fact(N - 1);
}

int main()
{
    setlocale(LC_ALL, "ru");
    foo();
    std::cout << sum(5, 4) << "\n-------" << std::endl;

    const int SIZE = 10;
    int arr[SIZE];

    int b = sizeof(arr); // 40 байт

    FillArr(arr, SIZE);
    PrintArray(arr, SIZE);

    // ---------------- //

    std::cout << "Шаблон: " << Summator(5, 4) <<'\n' << std::endl;
    // ---------------- //

    std::cout << "factorial is " << fact(5) << std::endl;
}


