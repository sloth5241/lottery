#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include "bubbleSort.h"
#include "randNumber.h"
using namespace std;
//using namespace RandNumber;


const int size = 6;
int arrRed[6]={0};


void printRedNumber() {
    int redNumberCount = 6;
    int redNumberScope = 32;
    //int tempRedBall = RandNumber::getRandNumber(redNumberScope);
    //cout << "临时红球:" << tempRedBall << endl;
    //生成非零随机数
}

void printBlueNumber() {
    int blueNumberCount = 1;
    int blueNumberScope = 16;
    int blueBall = getRandNumber(blueNumberScope);
    cout << "篮球:" << blueBall << endl;
    //生成非零随机数
}

int main(int argc, char* argv[]) {
    // 设置种子
    try{ 
        int loopCount = 1;
        //参数化: 设置测试循环次数
        if(argv[1]) {
            loopCount = stoi(argv[1]);
        }else{
            cout << "没有输入循环次数，因此默认循环一次" << endl;
        }
        for (int i=1; i<=loopCount; i++) {
            //打印红号
            printRedNumber();
            //打印蓝号
            printBlueNumber();
        }
    }
    catch(const char* msg) {
        cout << "exception msg:" << msg << endl;
    }
    return 0;
}
