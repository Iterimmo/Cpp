#include <iostream>
#include <stdarg.h>


enum class Operation { Add, Substract, Multiply };


int Calculate(const std::initializer_list<int>& il, const Operation operation) {

	switch (operation)
	{
	case Operation::Add:
	{
		int temp = 0;
		for (const auto& i : il) {
			temp += i;
		}
		return temp;
	}
	case Operation::Substract:
	{
		bool first = false;
		int temp;

		for (const auto& i : il) {
			if (first == false) {
				first = true;
				temp = i;
				continue;
			}
			temp -= i;

		}
		if (first == false) {
			return 0;
		}
		else {
			return temp;

		}
	}
	case Operation::Multiply:
	{
		int temp = 1;
		for (const auto& i : il) {
			temp *= i;
		}
		return temp;
	}
	}
	return 0;
}
