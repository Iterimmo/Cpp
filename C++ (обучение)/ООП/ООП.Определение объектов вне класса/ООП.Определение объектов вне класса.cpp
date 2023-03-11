#include <iostream>

class MyClass
{
public:
	MyClass(); // прототип конструктора (может быть любая другая функция)
	~MyClass(); // прототип деструктора (может быть любая другая функция)

private:
	void GoScream();

};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

void MyClass:: GoScream() {
	std::cout << "AAAAAAAAAAAAAAAAAAAA" << std::endl;
}


int main()
{
	setlocale(LC_ALL, "ru");

	MyClass test;
}
