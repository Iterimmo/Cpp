// 8.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

void PrintArray(const std::vector<std::vector<int>>& matrix, const int &rows, const int &columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
int main()
{
    setlocale(LC_ALL, "ru");
    int rows, columns;
    std::cout << "Введите количество строк и столбцов через пробел: ";
    std::cin >> rows >> columns;
    std::cout << "Каким числом надо заполнить массив: ";
    int fill;
    std::cin >> fill;
    std::vector <std::vector <int>> matrix (rows, std::vector<int>(columns, fill));
    PrintArray(matrix,rows,columns);

}

