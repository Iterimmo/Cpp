#include <iostream>

typedef unsigned short un;

struct OneByte
{
	un bit1 : 1;
	un bit2 : 1;
	un bit3 : 1;
	un bit4 : 1;
	un bit5 : 1;
	un bit6 : 1;
	un bit7 : 1;
	un bit8 : 1;
};

void print(char* __ptr, size_t __size)
{
	for (size_t i = 0; i < __size; i++)
	{

		auto __dataPtr = (OneByte*)(__ptr++);

		std::cout << __dataPtr->bit1
			<< __dataPtr->bit2
			<< __dataPtr->bit3
			<< __dataPtr->bit4
			<< __dataPtr->bit5
			<< __dataPtr->bit6
			<< __dataPtr->bit7
			<< __dataPtr->bit8;
	}

	std::cout << std::endl;
}

int main()
{
	short data;

	std::cin >> data;

	char* dataPtr = (char*)(&data);

	print(dataPtr, sizeof data);
}