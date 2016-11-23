#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include "bubbleSort.h"
#include "randNumber.h"
using namespace std;

int arrRed[6]={0};

int redBallExist(int tempRedBall) {
    /*
     * return 1:不存在 2:存在
     */
    int flag = 1;
    for(int i=1; i<=6; i++) {
        if(arrRed[i] == tempRedBall) {
            flag = 2;
            break;
        }
        else{
            continue;
        }
    }    
    return flag;
}

void printRedNumber() {
    int k =1;
    int redNumberScope = 32;
    //随机产生6个红球
    for(int i=0; i<6; i++) {
        int tempRedBall = getRandNumber(redNumberScope);
        //判断预选号码是否重复
        int result = redBallExist(tempRedBall);
        if(1 == result) {
            arrRed[k++] = tempRedBall;
        }
        else if(2 == result) {
            while(1) {
                tempRedBall = getRandNumber(redNumberScope);
                result = redBallExist(tempRedBall);
                if(1 == result) {
                    arrRed[k++] = tempRedBall; 
                    break;
                } 
            } 
        }
    }// for 6个红球
    //冒泡排序
    bubbleSort (6, arrRed);
}

void printBlueNumber() {
    //int blueNumberCount = 1;
    int blueNumberScope = 16;
    int blueBall = getRandNumber(blueNumberScope);
    cout << " +" << blueBall << endl;
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
