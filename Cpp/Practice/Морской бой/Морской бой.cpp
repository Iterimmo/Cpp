#include <iostream>
#include <vector>


// S - Корабль
// W - Вода 
// X - Место обстрела
// Направление
//		1 - верх (вниз)
//		2 - право
//		3 - низ
//		4 - лево
int ship_4_palub = 2;
int ship_3_palub = 2;
int ship_2_palub = 3;
int ship_1_palub = 4;

void view_field(const std::vector<std::vector <char>>& field) {
	std::cout << "   ";
	for (int i = 0; i < 10; i++) {
		std::cout << 10-i << "  ";
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++) {
		if (i == 0)
			std::cout << 10 - i << "  ";
		else
			std::cout << 10-i << "   ";
		for (int j = 0; j < 10; j++) {
			std::cout << field[i][j] << "  ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
void error_placement() {
	std::cout << "Неверное размещение корабля" << std::endl;
}
void view_ships(){
	std::cout << "У вас в наличии: " << std::endl;
	std::cout << "4-хпалубный корабль - " << ship_4_palub << std::endl;
	std::cout << "3-хпалубный корабль - " << ship_3_palub << std::endl;
	std::cout << "2-хпалубный корабль - " << ship_2_palub << std::endl;
	std::cout << "1-хпалубный корабль - " << ship_1_palub << std::endl;
}
bool place_ship(const int& row, const int& columns, const int& direction, std::vector<std::vector <char>>& field,int &ship,const int &size) {
	if ((row > 10) || (row < 0) || (columns > 10) || (columns < 0)) {
		error_placement();
		return false;
	}
	switch (direction) {
	case 1:
		if (row >= 7) {
			error_placement();
			return false;
		}
		for (int i = 0; i < size; i++) {
			if (field[9 - row - i][columns] == 'W') {
				field[9 - row - i][columns] = 'S';
			}
			else {
				std::cout << "На пути находится другой корабль" << std::endl;
				return false;

			}
		}
		ship--;
		view_field(field);
		break;
	case 2:
		if (columns >= 7) {
			error_placement();
			return false;
		}
		for (int i = 0; i < size; i++) {
			if (field[9 - row][columns + i] = 'W') {
				field[9 - row][columns + i] = 'S';
			}
			else {
				std::cout << "На пути находится другой корабль" << std::endl;
				return false;
			}
		}
		ship--;
		view_field(field);
		break;
	case 3:
		if (row <= 2) {
			error_placement(); 
			return false;
		}
		for (int i = 0; i < size; i++) {
			if (field[9 - row + i][columns] == 'W') {
				field[9 - row + i][columns] = 'S';
			}
			else {
				std::cout << "На пути находится другой корабль" << std::endl;
				return false;
			}
		}
		ship--;
		view_field(field);
		break;
	case 4:
		if (columns <= 2) {
			error_placement();
			return false;
		}
		for (int i = 0; i < size; i++) {
			if (field[9 - row][columns - i] == 'W') {
				field[9 - row][columns - i] = 'S';
			}
			else {
				std::cout << "На пути находится другой корабль" << std::endl;
				return false;
			}
		}
		ship--;
		view_field(field);
		break;
	default:
		std::cout << "Введено неверное направление" << std::endl;
		return false;
	}
	return true;
};

int main()
{
	setlocale(LC_ALL, "ru");

	// Задаем исходные переменные
	std::vector<std::vector<char>> field(10, std::vector<char>(10, 87));
	int ship_4_palub = 2;
	int ship_3_palub = 2;
	int ship_2_palub = 3;
	int ship_1_palub = 4;


	view_field(field);


	// Размещаем корабли
	while (true) {
		view_ships();

		while (ship_4_palub){
			std::cout << "Выберите исходную клетку для размещения 4-хпалубного корабля: ";
			int row, columns;
			std::cin >> row >> columns;
			row--;
			columns--;
			std::cout << "Выберите направление: ";
			int direction;
			std::cin >> direction;

			place_ship(row, columns, direction, field, ship_4_palub,4);
		
			
			

			
		}
		std::cout << "МЫ ВЫШЛИИИИИИИИИИИИИИИИИИИИИИИИИИИИИИИИ" << std::endl;
		return 0;
	}


}
