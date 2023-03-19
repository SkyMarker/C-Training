/**
* @Author: SkyMarker
* @Date: 2023/3/19 13:55
*/
#include "iostream"
using namespace std;

int main()
{
    int a,b,c,d,max;
    cout<<"Please input three numbers:";
    cin>>a>>b>>c;//输入三个数
    max=(d=a>=b?a:b)>=c?d:c;//
    cout<<"The biggest number is:"<<max<<endl;
    return 0;
}//三元运算符嵌套