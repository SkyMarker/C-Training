/**
* @Author: SkyMarker
* @Date: 2023/3/15 20:57
*/
#include <iostream>
#include "iomanip"
using namespace std;

int main()
{
    int i,j;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << j <<"x" << i << "=" << setw(2) << i * j << " ";
        }
        cout<<endl <<endl;
    }

}
//输出乘法表