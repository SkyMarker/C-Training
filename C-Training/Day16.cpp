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
    //���ѭ�������С�����
    //�ڲ�ѭ�������С��е�ͼ��
    //�зֵ���������
    //��������θ߶ȣ������������εĴ�С
    int n ;
    cout<<"����������θ߶�"<<endl;
    cin >> n;
    //�ϰ벿�־���������n��
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i -1; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j <= 2 * i; j++)
        {
            //ÿ�е�һ�������һ�����ӡ�Ǻţ������ӡ�ո����ɿ���Ч�����°벿����ͬ
            if (j == 0 or j == 2 * i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }

    //�°벿�־��е�����n-1��
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