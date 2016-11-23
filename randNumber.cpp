#include "randNumber.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;
double random(double start, double end) {

    return start+(end-start)*rand()/(RAND_MAX + 1.0);
}

int getRandNumber(int valueScope) {

    int j;
    // 设置种子
    j = int(random(1,valueScope)); 
    return j;
}
