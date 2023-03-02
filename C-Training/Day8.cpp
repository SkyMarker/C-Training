//
// Created by Dell on 2023/3/2.
//
#include "iostream"
using namespace std;

int main()
{
    const int  LENGTH = 10;
    const int  WIDTH  = 5;
    const char NEWLINE = '\n';
    int area;

    area =LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
    return 0;
}
/*输出结果为
    50
    const定义常量
*/