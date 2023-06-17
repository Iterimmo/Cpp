#include <iostream>
#include <vector>
#include "function.h"

int main()
{
    setlocale(LC_ALL, "ru");

    std::vector <std::pair<int, int>> points;
    do
    {
        fillVector(points);

        sortVector(points);

        intermediatePoints(points);

        offset(points);

        solve(points);

        points.clear();

    } while (nextGraph());

    return 0;
}

