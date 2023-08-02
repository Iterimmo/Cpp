// ООП.Инкапсуляция.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class CoffeeGrinder {
private:

    bool CheckVolt() { // скрываем проверку на вольтаж
        return true;
    }

public:
    void Start() {
        if (CheckVolt())
            std::cout << "Work is proccessing..." << std::endl;
        else
            std::cout << "Что-то пошло не так..." << std::endl;
    }
        
};

int main()
{
    setlocale(LC_ALL, "ru");
    CoffeeGrinder p2000;
    p2000.Start();
}
 