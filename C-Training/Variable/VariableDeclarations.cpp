#include <iostream>


// 变量声明
extern int a, b;
extern int c;
extern float f;

int main()
{
    using namespace std;
	// 变量定义
	int a, b;
	int c;
	float f;

	// 实际初始化
	a = 10;
	b = 20;
	c = a + b;

	cout << c << endl;

	f = 70.0 / 3.0;
	cout << f << endl;

	return 0;
}//当上面的代码被编译和执行时，它会产生下列结果 30   23.3333
