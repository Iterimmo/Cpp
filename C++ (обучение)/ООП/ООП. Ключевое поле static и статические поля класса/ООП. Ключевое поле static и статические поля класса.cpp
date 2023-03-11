// ООП. Ключевое поле static и статические поля класса.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#define print(x) std::cout<<x<<std::endl
#define newpart print("\n--------------------------------\n")
class Dot
{
public:
	static int Count;

	Dot(int x = 0, int y = 0) // в конструкторе увеличили счетчик элементов на 1
	{
		this->x = x;
		this->y = y;
		id = Count++;
	}
	~Dot() {                 // в деструкторе уменьшили счетчик элементов на 1
		Count--;
	}
	
	int GetCount() {
		return this->Count;
	}
	int GetId() {
		return this->id;
	}

private:

	int id;
	int x;
	int y;

};

int Dot::Count = 0;




int main()
{
	setlocale(LC_ALL, "ru");

	Dot point(4, 5);

	print(point.GetCount()); 
	point.~Dot(); // принудительно вызовем деструктор
	print(point.GetCount());


	newpart;

	Dot point1(1, 1);
	Dot point2(5, 2);
	Dot point3(2, 71);

	std::cout << "Количество созданных объектов: " << Dot::Count << std::endl;
	std::cout << "ID: " << point1.GetId() << std::endl;
	std::cout << "ID: " << point2.GetId() << std::endl;
	std::cout << "ID: " << point3.GetId() << std::endl;

	newpart;

}
