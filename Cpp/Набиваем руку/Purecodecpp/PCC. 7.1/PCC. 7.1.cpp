#include <iostream>

double sum = 0;
int counter = 0;

void Summator() {

	while (true)
	{
		std::cout << "Введите число: ";
		int x;
		std::cin >> x;
		if (x == 0) {
			std::cout << "\nКоличество чисел: " << counter << std::endl;
			std::cout << "Среднее арифметическое : " << sum / counter << std::endl;
			return;
		}
		sum += x;
		counter++;
	}
}
int main()
{
	setlocale(LC_ALL, "ru");
	Summator();

}
