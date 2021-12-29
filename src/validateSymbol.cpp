#include "../include/include.h"
void validateSymbol(char c) {
    if(c != '(' && c != ')' && c!='.'
    && c!='+' && c!='-'
    && c!='/' && c!='*'
    && !(c >= '0' && c <= '9')
    && c != 10) {
        cerr << "Error: wrong symbol for expression " << c;
        exit(1);
    }
}