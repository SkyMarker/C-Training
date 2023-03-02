#include <iostream>
#include <string>
using namespace std;

int main() {
    string greeting = "hello, runoob";
    cout << greeting;
    cout << "\n";     // 换行符
    string greeting2 = "hello, \
                       runoob";
    cout << greeting2;
    return 0;
}
/*结果输出为
    hello, runoob
    hello,                        runoob
    把一个很长的字符串常量进行分行
*/