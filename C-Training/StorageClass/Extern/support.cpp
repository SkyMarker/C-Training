/**
* @Author: SkyMarker
* @Date: 2023/3/7 16:39
*/
#include <iostream>

extern int count;

void write_extern(void)
{
    std::cout << "Count is " << count << std::endl;
}