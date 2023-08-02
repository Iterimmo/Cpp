// Словари и множества.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <set>
int main()
{
    std::set <int> s;
    
    s.insert(5);
    s.insert(1);
    s.insert(12);
    s.insert(4);
    s.insert(-1);

    for (auto& item : s)
        std::cout << item << std::endl;
    std::cout << "\n---------------------------------------" << std::endl;
    
    std::set<int>s1;

    for (int i = 0; i < 20; i++) {
        s1.insert(rand() % 14);
    }
    for (auto& item : s1)
        std::cout << item << std::endl;

    auto it = s1.find(13);
}
