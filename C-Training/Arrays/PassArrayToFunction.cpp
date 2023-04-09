/**
* @Author: SkyMarker
* @Date: 2023/4/8 21:16
*/
double getAverage(int arr[], int size)
{
    int i ,sum = 0;
    double avg;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    avg = double(sum) / size;
    return avg;
}//传递数组给函数


#include "iostream"
using namespace std;

double getAverage(int arr[],int size);

int main()
{
    int balance[5] = {1000,2,3,17,50};
    double avg;
    //  传递一个指向数组的指针作为参数
    avg = getAverage( balance, 5 );

    cout << "The Average is : " << avg << endl;

    return 0;

}