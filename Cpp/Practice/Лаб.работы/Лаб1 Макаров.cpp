#include <iostream>

typedef unsigned char uc;
typedef unsigned short un;

struct OneByte
{
	uc bit1 : 1;
	uc bit2 : 1;
	uc bit3 : 1;
	uc bit4 : 1;
	uc bit5 : 1;
	uc bit6 : 1;
	uc bit7 : 1;
	uc bit8 : 1;
};

void printType(OneByte* __ptr, size_t __size)
{
	if(__ptr->bit1 == 1)
	{
		std::cout << "Little Endian\n";
		return;
	}
		
	if((__ptr + __size)->bit1 == 1)
	{
		std::cout << "Big Endian\n";
		return;
	}

	std::cout << "Mixed Endian\n";
}

int main()
{
	short data = 1;

	OneByte* bytePtr = (OneByte*)(&data);
	
	printType(bytePtr, sizeof data);
}
