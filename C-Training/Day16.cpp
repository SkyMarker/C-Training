/**
* @Author: SkyMarker
* @Date: 2023/3/11 21:29
*/
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    //外层循环控制行、换行
    //内层循环控制列、列的图形
    //中分的三角菱形
    //定义半菱形高度，即定义了菱形的大小
    int n ;
    cout<<"请输入半菱形高度"<<endl;
    cin >> n;
    //上半部分居中正三角n行
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i -1; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j <= 2 * i; j++)
        {
            //每行第一个和最后一个外打印星号，其余打印空格，做成空心效果，下半部分相同
            if (j == 0 or j == 2 * i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }

    //下半部分居中倒三角n-1行
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j <= 2 * ( n - i - 2 ); j++)
        {
            if (j == 0 or j == 2 * ( n - i - 2 ))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}