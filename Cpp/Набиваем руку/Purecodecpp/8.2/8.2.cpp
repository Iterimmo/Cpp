// 8.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
using namespace std;
void PrintArray(const std::vector<std::vector<int>>& matrix, const int& rows, const int& columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
void FillArray(std::vector<std::vector<int>>& matrix, const int& rows, const int& columns) {
    for (int i = 0; i < rows; i++) {
        std::cout << "Введите числа матрицы: ";

        for (int j = 0; j < columns; j++) {
            std::cin >> matrix[i][j];
            
        }

    }
}
int main()
{
    setlocale(LC_ALL, "ru");
    int rows, columns;
    std::cout << "Введите количество строк и столбцов через пробел: ";
    std::cin >> rows >> columns;
    std::vector <std::vector <int>> matrix(rows,vector<int>(columns));
  
    FillArray(matrix, rows, columns);
    PrintArray(matrix, rows, columns);

}

