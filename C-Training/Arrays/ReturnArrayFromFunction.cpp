/**
* @Author: SkyMarker
* @Date: 2023/4/9 8:13
*/
#include "iostream"

using namespace std;

int * createArray(int size)
{
    int * arr = new int[size];
    for (int i = 0; i < size; i++)
    {
      arr[i] = i + 1;
    }
    return arr;
}
int main()
{
    int * myArray = createArray(5);
    for (int i = 0; i < 5; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;
    delete[] myArray;
    return 0;
}

