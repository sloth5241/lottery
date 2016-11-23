#include "randNumber.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int getRandNumber(int valueScope){
    /*
     *返回非零的随机数
     */
    int randNumber = 0;
    srand( (unsigned)time( NULL ) );
    int temp = rand() % valueScope;
    if (0 == temp) {
        while(1) {
            temp = rand() % valueScope;
            if(0!=temp) {
                randNumber = temp;
                break;
            }
        }
    }else{
        randNumber = temp;
    }
    return randNumber;
}
