#include <iostream>
#include <vector>


// 220 - Корабль
// 87 - Вода (Water - 'W')
// Направление
//		1 - верх
//		2 - право
//		3 - низ
//		4 - лево

void view_field(std::vector<std::vector <char>>& field) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			std::cout << field[i][j] << ' ';
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}


int main()
{
	setlocale(LC_ALL, "ru");

	// Задаем исходные переменные
	std::vector<std::vector<char>> field(10, std::vector<char>(10, 87));
	int ship_4_palub = 1;
	int ship_3_palub = 2;
	int ship_2_palub = 3;
	int ship_1_palub = 4;
	int mass_index[]{ 0,1,2,3,4,5,6,7,8,9 };
	int mass_directions[]{ 1,2,3,4 };

	view_field(field);


	// Размещаем корабли
	while (true) {
		std::cout << "У вас в наличии: " << std::endl;
		std::cout << "4-хпалубный корабль - " << ship_4_palub << std::endl;
		std::cout << "3-хпалубный корабль - " << ship_3_palub << std::endl;
		std::cout << "2-хпалубный корабль - " << ship_2_palub << std::endl;
		std::cout << "1-хпалубный корабль - " << ship_1_palub << std::endl;

		while (ship_4_palub){

			std::cout << "Выберите исходную клетку для размещения 4-хпалубного корабля: ";
			int row, columns;
			std::cin >> row >> columns;
			row--;
			columns--;
			std::cout << "Выберите направление: ";
			int direction;
			std::cin >> direction;

			switch (direction){
			case 1: 
				for (int i = 0; i < 4; i++) {
					if (field[9 - row - i][columns] == 'W') {
						field[9 - row - i][columns] = 'S';
					}
					else {
						std::cout << "На пути находится другой корабль" << std::endl;
					}	
				}
				ship_4_palub--;
				view_field(field);
				break;
			case 2: 
				for (int i = 0; i < 4; i++) {
					if (field[9 - row][columns + i] = 'W') {
						field[9 - row][columns + i] = 'S';
					}
					else {
						std::cout << "На пути находится другой корабль" << std::endl;
					}
				}
				ship_4_palub--;
				view_field(field);
				break;
			case 3: 
				for (int i = 0; i < 4; i++) {
					if (field[9 - row + i][columns] == 'W'){
						field[9 - row + i][columns] = 'S';
					}
					else {
						std::cout << "На пути находится другой корабль" << std::endl;
					}
				}
				ship_4_palub--;
				view_field(field);
				break;
			case 4: 
				for (int i = 0; i < 4; i++) {
					if (field[9 - row][columns - i] == 'W') {
						field[9 - row][columns - i] = 'S';
					}
					else {
						std::cout << "На пути находится другой корабль" << std::endl;
					}
				}
				ship_4_palub--;
				view_field(field);
				break;
			default:
				std::cout << "Введено неверное направление" << std::endl;
				break;
			}
		
			
			

			
		}
		std::cout << "МЫ ВЫШЛИИИИИИИИИИИИИИИИИИИИИИИИИИИИИИИИ" << std::endl;
		return 0;
	}


}
