#include <iostream>
#include <list>
#define print(x) std::cout<<x<<std::endl;
using namespace std;

template <typename T>
void PrintList(const list<T> &lst) {

    for (auto i = lst.cbegin(); i != lst.cend(); ++i)
        print(*i);

}

int main()
{
    list<int> lst = { 5,12,6,5,5,3 };
    auto iter = lst.begin();
  //  lst.erase(iter);
    advance(iter, 3);
    lst.insert(iter, 500);
    PrintList(lst);
    iter++;
    ++iter;
    


}

