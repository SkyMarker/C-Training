/**
* @Author: SkyMarker
* @Date: 2023/3/11 15:22
*/
#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 20;
    int c ;

    if ( a && b )
    {
        cout << "Line 1 - ����Ϊ��"<< endl ;
    }
    if ( a || b )
    {
        cout << "Line 2 - ����Ϊ��"<< endl ;
    }
    /* �ı� a �� b ��ֵ */
    a = 0;
    b = 10;
    if ( a && b )
    {
        cout << "Line 3 - ����Ϊ��"<< endl ;
    }
    else
    {
        cout << "Line 4 - ������Ϊ��"<< endl ;
    }
    if ( !(a && b) )
    {
        cout << "Line 5 - ����Ϊ��"<< endl ;
    }
    return 0;
}