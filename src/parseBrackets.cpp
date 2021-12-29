#include "../include/include.h"

float parseBrackets() {
    char c = cin.get();
    validateSymbol(c);
    if (c == '(') {
        //opening registration
        bracketChecker(c);
        float x = baseParse();
        cin.get();
        return x;
    } else {
        cin.putback(c);
        return parseNumber();
    }
}
