// STL.Итераторы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int>vectr = { 5,4,52,61 };
    vector<int>::iterator it;

    it = vectr.begin();

    cout << *it << endl;
    *it = 141;
    cout << *it << endl;
    cout << "\n------------\n" << endl;

    for (vector<int>::const_iterator i = vectr.cbegin(); i != vectr.cend(); i++)
        cout << *i << endl;
    
    cout << "\n------------\n" << endl;


    for (vector<int>::reverse_iterator i = vectr.rbegin(); i != vectr.rend(); i++)
        cout << *i << endl;

    cout << "\n------------\n" << endl;

    vector<int> vec1{ 2,14,68,781 };
    vector<int>::iterator iter1 = vec1.begin();

    advance(iter1, 2);
    cout << *iter1 << endl;

    cout << "\n------------\n" << endl;

    vector<int> vec2{ 2,14,68,781,51,24,76,97 };
    vector<int>::iterator iter2 = vec2.begin();

    advance(iter2, 2);
    vec2.insert(iter2, 999);

    for (vector<int>::iterator i = vec2.begin(); i != vec2.end(); i++)
        cout << *i << endl;
    cout << "\n------------\n" << endl;

    vector<int>::iterator it_erase = vec2.begin();
    /*vec2.erase(it_erase);

    for (vector<int>::iterator i = vec2.begin(); i != vec2.end(); i++)
        cout << *i << endl;
    cout << "\n------------\n" << endl;*/

    vec2.erase(it_erase,it_erase+4);

    for (vector<int>::iterator i = vec2.begin(); i != vec2.end(); i++)
        cout << *i << endl;









    return 0;

}

