#include <iostream>
#include "bubbleSort.h"
using namespace std;

void bubbleSort (int n, int arrRed[]) {
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
    for (int i=n; i>=1; i--) {
        cout << arrRed[i] <<" ";
    }

    //将数组置为0，为后续红号做准备
    for (int i=1; i<=n; i++){
        arrRed[i] = 0;
    }
}
