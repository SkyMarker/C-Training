/**
* @Author: SkyMarker
* @Date: 2023/3/15 20:32
*/
#include "iostream"
using namespace std;
//利用for循环输出菱形
int main()
{
    cout << "Please enter the height of the diamond: ";
    int n = 0;
    cin >> n;
    for (int i = 0; i < 2 * n + 1; i++) {
        for (int j = 0; j < 2 * n + 1; j++) {
            if (abs(i - n) + abs(j - n) == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}