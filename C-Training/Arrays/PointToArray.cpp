/**
* @Author: SkyMarker
* @Date: 2023/4/8 20:51
*/
#include "iostream"
using namespace std;

int main()
{
    double runoobAarray[5] = {1000.0,2.0,3.4,17.0,50.0};
    double *p;

    p = runoobAarray;

    cout << "ʹ��ָ�������ֵ" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }    
    cout << " ʹ��runoobAarray ��Ϊ��ַ������ֵ " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "*(runoobAarray + " << i << ") : " ;
        cout << *(runoobAarray + i) << endl;
    }
    return 0 ;
}
