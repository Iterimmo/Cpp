#include <set>
#include <iostream>
#define print(x) std::cout<<x<<std::endl
#define print_arr(collection) for(auto var:collection) print(var)
#define newpart print("\n---------------\n")
#define newline print("\n")

using namespace std;
 

int main()
{
    setlocale(LC_ALL, "ru");


    set<int> st;

    st.insert(5);
    st.insert(8);
    st.insert(3);

    print_arr(st);
    newpart;

    for (auto i = 0; i < 20; i++)
        st.insert(rand() % 10); // хоть мы и добавляем 20 элементов к нашим 3, в множестве будут только 10 элементов от 0 до 9;

    print_arr(st);
    newpart;

    auto it_find = st.find(5);
    //auto it = st.find(20); - вернет st.end(), т.к. в нашем множестве нет 20

    // Пример использования файнд и энд

    int val;
    cin >> val;

    if (st.find(val) != st.end())
        print("Данное значение есть в множестве");
    else
        print("Данное значение не найдено");

    newpart;

    multiset<int> mlt{ 5,9,8,5,12 };

    print(*(mlt.lower_bound(5)));
    print(*(mlt.upper_bound(5)));
    auto iter = mlt.equal_range(5);
     
    system("pause");
    return 0;
}

