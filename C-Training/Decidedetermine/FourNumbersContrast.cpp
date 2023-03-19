/**
* @Author: SkyMarker
* @Date: 2023/3/19 13:59
*/
#include "iostream"
#include "iomanip"
using namespace std;

int main()
{
    int a,b,c,d,m,n,z;
    a = 10;
    b = 20;
    c = 30;
    d = 40;
    m = a > b ? a : b;
    n = c > d ? c : d;
    z = m > n ? m : n;
    cout << "The biggest number is:" << z << endl;
    return 0;
}//三元运算符嵌套