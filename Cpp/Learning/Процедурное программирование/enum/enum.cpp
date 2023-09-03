#include <iostream>
#include <stdarg.h>
#include "enum.h"

template <typename T>
void print(T var)
{
	std::cout << var << std::endl;
}

int main() {
	int a = 1, b = 2, c = 3;


	auto sub = Calculate({ c,a,b }, Operation::Substract);
	auto mul = Calculate({ c,a,b }, Operation::Add);
	auto add = Calculate({ c,a,b }, Operation::Multiply);
	print(sub);
	print(mul);
	print(add);

}