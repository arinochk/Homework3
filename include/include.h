#ifndef TASK2_INCLUDE_H
#define TASK2_INCLUDE_H

static int BRACKETS_AMOUNT = 0;
#endif //TASK2_INCLUDE_H

#include <iostream>
#include <math.h>

using namespace std;

float parseNumber();
float parseBrackets();
float priorityExpressionParse();
float baseParse();
void validateSymbol(char c);
void bracketChecker(char c);