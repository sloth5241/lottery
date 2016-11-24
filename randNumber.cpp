#include "randNumber.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int getRand(int valueScope) {
    int start = 1;
    int end = valueScope;
    int j = start + rand() % (end-start+1);
    return j;
}

int getRandNumber(int valueScope) {

    int j;
    // 设置种子
    j = getRand(valueScope);
    return j;
}
