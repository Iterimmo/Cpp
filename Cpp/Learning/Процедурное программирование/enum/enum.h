#pragma once
#ifndef ENUM
#define ENUM
#include <iostream>
#include <stdarg.h>

enum class Operation { Add, Substract, Multiply };
int Calculate(const std::initializer_list<int>& il, const Operation operation);




#endif // !ENUM

