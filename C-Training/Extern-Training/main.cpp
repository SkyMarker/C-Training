/**
* @Author: SkyMarker
* @Date: 2023/3/7 16:39
*/
#include "support.cpp"
int count ;
extern void write_extern();

int main()
{
    count = 5;
    write_extern();
}