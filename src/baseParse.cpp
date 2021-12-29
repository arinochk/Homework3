#include "../include/include.h"

float baseParse() {
    float x = priorityExpressionParse();
    while(1) {
        char c = cin.get();
        validateSymbol(c);
        //closing check
        bracketChecker(c);
        switch (c)
        {
            case '+':
                x += priorityExpressionParse();
                break;
            case '-':
                x -= priorityExpressionParse();
                break;
            default:
                cin.putback(c);
                return x;
        }
    }
}
