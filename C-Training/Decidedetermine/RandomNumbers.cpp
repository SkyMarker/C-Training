/**
* @Author: SkyMarker
* @Date: 2023/3/23 22:54
*/
#include "iostream"
#include "ctime"
#include "cstdlib"

using namespace std;

int main()
{
    int i,j;
    srand((unsigned)time(NULL ) );

    for (int i = 0; i < 10; i++)
    {
        j=rand();
        cout << "Ëæ»úÊý £º" << j << endl;
    }
    return 0;
}
