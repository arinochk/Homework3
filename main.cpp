#include <iostream>
#include "include/include.h"

using namespace std;

int main() {
    cout << "Enter expression: " << endl;;
    float res = baseParse();
    cout << "Result: " << res << endl;
    return 0;
}

