// Иванова.СПП.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "ru");

	int n,temp_n,x = 0,fact=1;
	const int bs = 6, dg = 2, one = 1;

	std::cout << "Введите число итераций: ";
	std::cin >> n;

	while (!(n == 1))
	{
		temp_n = 1;
		fact = 1;
		while (!(temp_n == n)) {
			fact = fact + (temp_n *fact);
			temp_n = temp_n + one;
		}

	x = x + ((pow(bs, n) * (pow(n, dg) - one)) / (fact));

	n = n - one;
	}
	std::cout << "Ответ: " << x << std::endl;

}

