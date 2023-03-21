// STL.List.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <list>
#define print(x) std::cout<<x<<std::endl
#define newpart print("\n--------------\n")
using namespace std;


template <typename T>
void PrintList(const list<T>& lst) {
    for (auto i = lst.cbegin(); i != lst.cend(); i++)
        print(*i);
}

int main()
{

    list<int> lst = { 1,2,3 };

    lst.push_back(55);
    lst.push_front(122);

    auto it_lst = lst.begin();
    print(*it_lst);
    newpart;

    // шаблон-функция вывода в консоль листа
    PrintList(lst);
    newpart;

    // сортировка

    lst.sort();

    PrintList(lst);
    newpart;

    // поп- и пуш-бэк

    lst.pop_back();
    lst.pop_front();

    PrintList(lst);
    print('\n');
    print(lst.size()); // вывод размера в консоль
    newpart;

   // ++it_lst;
    //lst.insert(it_lst, 5000);
    // Удаление одинаковых последовательных элементов
    list<int>lst2 = { 5,4,2,4,5,2,5,5,5,5 };
    lst2.unique();
    PrintList(lst2);
    newpart;
    // очистка листа
    print(lst2.size());
    lst2.clear();
    print(lst2.size());
    newpart;

    // итерируем лист
    list<int>lst3 = { 1,2,3,4,5,1,2,3 };
    auto iter = lst3.begin();
    ++iter; // нельзя сразу прибавить 3 или...
    ++iter;
    lst3.insert(iter, 5000);
    PrintList(lst3);
    --iter;
    --iter;
    print('\n');
    advance(iter, 5); // сместим на 5 элементов вправо
    lst3.insert(iter, 12421214);
    advance(iter, 2); // сместим еще на 2 (суммарно 7)
    lst3.insert(iter, 22222222); 
    PrintList(lst3);
    newpart;

    lst3.assign(3, 15);
    PrintList(lst3);
    newpart;

    list<int>list1 = { 1,2,3 };
    list<int>list2 = { 5,3 };
    list1.assign(list2.begin(), list2.end());
    PrintList(list1);
    return 0;
}

