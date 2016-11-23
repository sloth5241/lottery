/*
 *双色球选号程序
 *6个红号，1个蓝好
 */
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int arrRed[6]={0};

void bubbleSort (int n) {
    //比较n-1趟
    int temp=0;
    for (int i=1; i<=n-1; i++) {
        //每一趟的比较
        for (int j=1; j<=n-i; j++) {
            if(arrRed[j] < arrRed[j+1]) {
                temp=arrRed[j];
                arrRed[j] = arrRed[j+1];
                arrRed[j+1]=temp;
            }
        }/*n-1次循环*/
    }/*n次循环*/
    
    cout << "预选号码: ";
    for (int i=6; i>=1; i--) {
        cout << arrRed[i] <<" ";
    }
}

void getRandNumbers(int count, int valueScope, string flag) {
        int i,j;
        int k = 1;
        // 设置种子
        srand( (unsigned)time( NULL ) );

        /* 生成n 个随机数 */
        for( i = 1; i <= count; i++ ){
            // 生成实际的随机数
            j= ( rand() % valueScope );    //%后面数字代表取值范围
            if("red" == flag) {
                arrRed[k++] = j;
            }
        }/*for*/

        //冒泡排序
        if("red"==flag) {
            bubbleSort(6);
        }else{
            //输出蓝号
            cout << " + " << j << endl; 
        } 
}

void printRedNumber() {
    int redNumberCount = 6;
    int redNumberScope = 32;
    getRandNumbers(redNumberCount, redNumberScope, "red");
}

void printBlueNumber() {
    int blueNumberCount = 1;
    int blueNumberScope = 16;
    getRandNumbers(blueNumberCount, blueNumberScope, "blue");
}

int main() {
    try{ 
        //打印红号
        printRedNumber();
        //打印蓝号
        printBlueNumber();
    }
    catch(const char* msg) {
        cout << "exception msg:" << msg << endl;
    }
    return 0;
}
