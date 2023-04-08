// STL. Map,multimap,ассоциативные контейнеры.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <map>
#include <string>

using namespace std;
#define print(x) std::cout<<x<<std::endl
#define newpart print("\n--------------\n")
int main()
{
	setlocale(LC_ALL, "ru");

	pair<int, string> pr(1,"lays");
	
	cout << pr.first << "\t" << pr.second;
	newpart;

	map<int, string> mp({ {1, "Alisha"} });
	mp.insert(make_pair(3, "Intel"));
	mp.emplace(2, "AMD"); // <-- использовать для добавления элементов
	mp.emplace(2, "Leha?"); // <-- элемент не будет добавлен, т.к. 2 одинаковых ключа.
	auto it = mp.find(44);

	it != mp.end() ? print(it->second):print("Элемент не найден");

	newpart;

	return 0;

}

