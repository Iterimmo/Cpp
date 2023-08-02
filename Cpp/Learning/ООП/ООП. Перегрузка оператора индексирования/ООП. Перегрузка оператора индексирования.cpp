// ООП. Перегрузка оператора индексирования.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Index {
public:
    int& operator [](int index) {

        return arr[index];

    }
private:
    int arr[4]{ 11, 22, 35, 47 }; // внутри класса нужно указывать явно количество элементов
};


int main()
{
    Index first;
    std::cout << first[0] << std::endl;
    first[0] = 15;
    std::cout << first[0] << std::endl;

}
