/**
* @Author: SkyMarker
* @Date: 2023/3/14 18:40
*/
#include <iostream>
using namespace std;

int main()
{
    int a = 21;
    int c ;

    c =  a;
    cout << "Line 1 - =  �����ʵ����c ��ֵ = : " <<c<< endl ;

    c +=  a;
    cout << "Line 2 - += �����ʵ����c ��ֵ = : " <<c<< endl ;

    c -=  a;
    cout << "Line 3 - -= �����ʵ����c ��ֵ = : " <<c<< endl ;

    c *=  a;
    cout << "Line 4 - *= �����ʵ����c ��ֵ = : " <<c<< endl ;

    c /=  a;
    cout << "Line 5 - /= �����ʵ����c ��ֵ = : " <<c<< endl ;

    c  = 200;
    c %=  a;
    cout << "Line 6 - %= �����ʵ����c ��ֵ = : " <<c<< endl ;

    c <<=  2;
    cout << "Line 7 - <<= �����ʵ����c ��ֵ = : " <<c<< endl ;

    c >>=  2;
    cout << "Line 8 - >>= �����ʵ����c ��ֵ = : " <<c<< endl ;

    c &=  2;
    cout << "Line 9 - &= �����ʵ����c ��ֵ = : " <<c<< endl ;

    c ^=  2;
    cout << "Line 10 - ^= �����ʵ����c ��ֵ = : " <<c<< endl ;

    c |=  2;
    cout << "Line 11 - |= �����ʵ����c ��ֵ = : " <<c<< endl ;

    return 0;
}