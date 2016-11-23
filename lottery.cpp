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

    //将数组置为0，为后续红号做准备    
    for (int i=1; i<=6; i++){
        arrRed[i] = 0;
    }
}

void getRedRandNumbers(int count, int valueScope) {
        int i,j;
        int k = 1;

        /* 生成n 个随机数 */
        for( i = 1; i <= count; i++ ){
            j= ( rand() % valueScope );    //%后面数字代表取值范围
            //非零判断
            if(0!=j) {
                arrRed[k++] = j;
            }else{
                while(1) {
                    j= ( rand() % valueScope );    //%后面数字代表取值范围
                    if(0!=j) {
                        arrRed[k++] = j; 
                        break;
                    }
                }
                continue;
            }/* else */
        }

        //冒泡排序
        bubbleSort(6);
}

void getBlueRandNumbers(int count, int valueScope) {
        int i,j;

        /* 生成n 个随机数 */
        for( i = 1; i <= count; i++ ){
            j= ( rand() % valueScope );    //%后面数字代表取值范围
            //非零判断
            if(0!=j) {
                cout << " + " << j << endl; 
            }else{
                while(1) {
                    j= ( rand() % valueScope );    //%后面数字代表取值范围
                    if(0!=j){
                        cout << " + " << j << endl; 
                        break;
                    }
                }
            }
        } 
}

void printRedNumber() {
    int redNumberCount = 6;
    int redNumberScope = 32;
    getRedRandNumbers(redNumberCount, redNumberScope);
}

void printBlueNumber() {
    int blueNumberCount = 1;
    int blueNumberScope = 16;
    getBlueRandNumbers(blueNumberCount, blueNumberScope);
}

int main(int argc, char* argv[]) {
    //参数化: 设置测试循环次数
    int loopCount = stoi(argv[1]);
    // 设置种子
    srand( (unsigned)time( NULL ) );
    try{ 
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
