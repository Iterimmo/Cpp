
#ifndef FUNCTION_H
#define FUNCTION_H
#include <vector>

bool solve(const std::vector<std::pair<int, int>>& points);
void printVector(const std::vector<std::pair<int, int>>& points);
void fillVector(std::vector<std::pair<int, int>>& points);
void sortVector(std::vector<std::pair<int, int>>& points);
int foundCenter();
void offset(std::vector<std::pair<int, int>>& points);
int countPoints();
bool nextGraph();
void remove(std::vector<std::pair<int, int>>& points, int index);
void intermediatePoints(std::vector<std::pair<int, int>>& points);
#endif
