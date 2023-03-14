// Иванова.СПП.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "ru");
	const int a = 6, b = 2, c = 1, d = 0;
	int x2, x4, x1 = d, x3 = c;

	std::cout << "Введите число итераций: ";
	std::cin >> x2;
	while (!(x2 == c))
	{
		x4 = c;
		x3 = c;
	
		while (!(x4 == x2)) {
			x3 = x3 + (x4 * x3);
			x4 = x4 + c;
		}

		x1 = x1 + ((pow(b, x2) * (pow(x2, a) - c)) / (x3));
		x2 = x2 - c;
	}
	std::cout << "Ответ: " << x1 << std::endl;
}

