#include <iostream>


// ��������
extern int a, b;
extern int c;
extern float f;

int main()
{
    using namespace std;
	// ��������
	int a, b;
	int c;
	float f;

	// ʵ�ʳ�ʼ��
	a = 10;
	b = 20;
	c = a + b;

	cout << c << endl;

	f = 70.0 / 3.0;
	cout << f << endl;

	return 0;
}//������Ĵ��뱻�����ִ��ʱ������������н�� 30   23.3333