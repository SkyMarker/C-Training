/**
* @Author: SkyMarker
* @Date: 2023/3/8 15:42
*/
#include <iostream>
using namespace std;

int main()
{
    int a = 21;
    int b = 10;
    int c;

    c = a + b;
    cout << "Line 1 - c ��ֵ�� " << c << endl ;
    c = a - b;
    cout << "Line 2 - c ��ֵ�� " << c << endl ;
    c = a * b;
    cout << "Line 3 - c ��ֵ�� " << c << endl ;
    c = a / b;
    cout << "Line 4 - c ��ֵ�� " << c << endl ;
    c = a % b;
    cout << "Line 5 - c ��ֵ�� " << c << endl ;

    int d = 10;   //  �����������Լ�
    c = d++;
    cout << "Line 6 - c ��ֵ�� " << c << endl ;

    d = 10;    // ���¸�ֵ
    c = d--;
    cout << "Line 7 - c ��ֵ�� " << c << endl ;
    return 0;
}
/*
Line 1 - c ��ֵ�� 31
Line 2 - c ��ֵ�� 11
Line 3 - c ��ֵ�� 210
Line 4 - c ��ֵ�� 2
Line 5 - c ��ֵ�� 1
Line 6 - c ��ֵ�� 10
Line 7 - c ��ֵ�� 10
 */