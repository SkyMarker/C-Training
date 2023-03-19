/**
* @Author: SkyMarker
* @Date: 2023/3/3 16:06
*/
#include <iostream>
using namespace std;

/*
 * 这个程序演示了有符号整数和无符号整数之间的差别
*/
int main()
{
    short int i;           // 有符号短整数
    short unsigned int j;  // 无符号短整数

    j = 50000;

    i = j;
    cout << i << " " << j;

    return 0;
}
//结果中，无符号短整数 50,000 的位模式被解释为有符号短整数 -15,536