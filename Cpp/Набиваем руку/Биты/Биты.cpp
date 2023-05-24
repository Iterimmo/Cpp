#include <iostream>

typedef unsigned short un;
typedef unsigned char uc;

class OneByte
{
public:
	uc bit1 : 1;
	uc bit2 : 1;
	uc bit3 : 1;
	uc bit4 : 1;
	uc bit5 : 1;
	uc bit6 : 1;
	uc bit7 : 1;
	uc bit8 : 1;
};
template <class T>
void print(T* __ptr, size_t __size) {
	for (size_t i = 0; i < __size; i++) {
		std::cout <<
			(__size - i) << " byte " <<
			un(__ptr->bit8) <<
			un(__ptr->bit7) <<
			un(__ptr->bit6) <<
			un(__ptr->bit5) <<
			un(__ptr->bit4) <<
			un(__ptr->bit3) <<
			un(__ptr->bit2) <<
			un(__ptr->bit1) << std::endl;

		__ptr++; 
	}

	std::cout << std::endl;
}

int main()
{
	float data;

	std::cin >> data;

	OneByte* dataPtr = (OneByte*)(&data);

	print(dataPtr, sizeof data);
}
