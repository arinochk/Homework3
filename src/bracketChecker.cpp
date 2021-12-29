#include "../include/include.h"

void bracketChecker(char c) {
    if (c == '(') {
        BRACKETS_AMOUNT++;
    }
    if (c == ')') {
        BRACKETS_AMOUNT--;
        if (BRACKETS_AMOUNT < 0) {
            //only closing brackets found
            cerr << "Error: found closing bracket with out open";
            exit(1);
        }
    }
}