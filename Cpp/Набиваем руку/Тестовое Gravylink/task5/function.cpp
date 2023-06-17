#include <iostream>
#include <vector>
#include <algorithm>


static int N;

int foundCenter();
int countPoints();
bool solve(const std::vector<std::pair<int, int>>& points) {
    // center - ����������� ��������, ������� ����� �������� �� ���������� ��������
    int center = foundCenter();

    // ����������� ���������� �� � ������ ���� �����
    if (N % 2 == 1) {
        if (points.at(center).first != 0) {
            std::cout << "\n\t������� ��������\n" << std::endl;
            return false;
        }
    }
    // ���������� �� ������ ������ N(x,y), ����� ������������
    for (int i = 0; i < center; i++) {

        if ((abs(points[i].first) != abs(points[N - i - 1].first)) or (abs(points[i].second) != abs(points[N - i - 1].second))) {
            std::cout << "\n\t������� ��������\n" << std::endl;
            return false;
        }

    }
    // ���� �� ������ �� � ����� false - ������
    std::cout << "\n\t������� ������\n" << std::endl;
    return true;
};
void printVector(const std::vector<std::pair<int, int>>& points)
{
    std::cout << "������ ����� ��������� �����: ";

    for (const auto& item : points) {
        std::cout << "{" << item.first << ","
            << item.second << "}" << "; ";
    }
    std::cout << std::endl;
}
void fillVector(std::vector<std::pair<int, int>>& points) {
    countPoints();
    for (int i = 0; i < N; i++) {
        int X, Y;
        std::cout << "������� ���������� ����� " << (i + 1) << " : ";
        std::cin >> X >> Y;
        points.push_back(std::pair<int, int>{X, Y});
    }
}
void sortVector(std::vector<std::pair<int, int>>& points) {
    std::sort(points.begin(), points.end());
}
int foundCenter() {
    return N / 2;
}
void offset(std::vector<std::pair<int, int>>& points) {

    // (min + max) / 2
    float offset = (points.at(0).first + points.back().first) / 2.;

    // �������� �� ��������� ������ 
    offset = round(offset * 10) / 10;

    // �������� �� ������� � �������� ��������
    if (offset != 0) {
        for (auto& it : points) {
            it.first -= offset;
        }
    }
}
int countPoints() {

    std::cout << "������� ���������� �����: ";
    std::cin >> N;
    return N;

}
bool nextGraph() {
    std::cout << "����������? (y/n): ";
    char cont;
    std::cin >> cont;
    if (cont == 'n')
        return false;
    return true;
}
void remove(std::vector<std::pair<int, int>>& points, int index) {
    points.erase(points.begin() + index);

}
void intermediatePoints(std::vector<std::pair<int, int>>& points) {
    if (N > 2) {
        double  tangentlast;
        double  tangentnext;
        for (int i = 1; i < (N - 1); i++) {
            try {
                tangentlast = (points[i].second - points[i-1].second) / (points[i].first - points[i-1].first);
            }
            catch (std::overflow_error& e) {
                tangentlast = 5562434121212414.7124508312765; // ������ ������� �����, ������� ����� ������� � ���������� ��������� ������
            }
            try {
                tangentnext = (points[i + 1].second - points[i].second) / (points[i + 1].first - points[i].first);
            }
            catch (std::overflow_error& e) {
                tangentnext = 999999991212999.765124808765;  // ������ ������� �����, ������� ����� ������� � ���������� ��������� ������
            }
            if (tangentlast == tangentnext) {
                N--;
                remove(points, i);
                i = 0; // ��� �������� � ��������� �������� �������� ����� 1.
            }
        }
     
    }
   
}