// ООП. Агрегация и композиция.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
class Cap {

public:
	std::string GetColor() {
		return cap;
	}
private:
	std::string cap = "red";
	

};

class Human
{
public:
    void Think() {
		brain.Think();
    }
	void ColorCapHuman() {
		std::cout << "Цвет кепки " << cap.GetColor() << std::endl;
	}
private:
	class Brain
	{
	public:
		void Think() {
			std::cout << "я думаю!" << std::endl;
		}
	private:
	};

	Brain brain;
	Cap cap;

	
};

 

int main()
{
	setlocale(LC_ALL, "ru");

	Human human;
	human.Think();
	human.ColorCapHuman();
	system("pause");
	return 0;
}

