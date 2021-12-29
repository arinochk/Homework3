//
// Created by Cherednik on 19.12.2021.
//
#include "../include/include.h"

float parseNumber() {
    float res = 0;
    int fractionDeep = 0;
    while(1) {
        char c = cin.get();
        if (c >= '0' && c <= '9') {
            if (fractionDeep > 0) {
                res = res + (c - '0') * pow(0.1, fractionDeep);
                fractionDeep++;
            } else {
                res = res * 10 + (c - '0');
            }
        } else {
            if (c == '.') {
                if (fractionDeep == 1) {
                    cerr << "Error: wrong fraction part for number " << res;
                    exit(1);
                }
                fractionDeep = 1;
                continue;
            }
            cin.putback(c);
            return res;
        }
    }
}