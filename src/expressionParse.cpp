
#include "../include/include.h"

float priorityExpressionParse() {
    float x = parseBrackets();
    while(1) {
        char c = cin.get();
        validateSymbol(c);
        switch (c)
        {
            case '*':
                x *= parseBrackets();
                break;
            case '/':
                x /= parseBrackets();
                break;
            default:
                cin.putback(c);
                return x;
        }
    }
}
