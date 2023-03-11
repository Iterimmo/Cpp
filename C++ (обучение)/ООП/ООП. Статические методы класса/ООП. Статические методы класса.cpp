// ООП. Статические методы класса.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#define print(x) std::cout<<x<<std::endl
#define newpart print("\n--------------------------------\n")

class Dot
{
public:
	

	Dot(int x = 0, int y = 0) // в конструкторе увеличили счетчик элементов на 1
	{
		this->x = x;
		this->y = y;
		id = Count++;
	}
	~Dot() {                 // в деструкторе уменьшили счетчик элементов на 1
		Count--;
	}


	int GetId() {
		return id;
	}
	int GetX() {
		return x;
	}
	static int GetCount() {
		return Count;
	
	}
	static void ChangeX(Dot& dot,int x) {
		dot.x = x;
	}
private:

	int id;
	int x;
	int y;
	static int Count;

};

int Dot::Count = 0;


int main()
{
	setlocale(LC_ALL, "ru");

	Dot point1(5, 3);
	Dot point2(4, 4);
	Dot point3(100, 24);

	std::cout << "ID: " << point1.GetId() << std::endl;
	std::cout << "ID: " << point2.GetId() << std::endl;
	std::cout << "ID: " << point3.GetId() << std::endl;

	newpart;

	std::cout << "Количество объектов класса " << Dot::GetCount() << std::endl;
	std::cout << "Количество объектов класса " << point1.GetCount() << std::endl;

	newpart;

	print(point1.GetX());

	Dot::ChangeX(point1, 50);

	print(point1.GetX());
}

