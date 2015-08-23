#include <iostream >

using namespace std;

void foo(const int a = 5)
{
	cout << a * 2 << endl;
}

int a = 123;
int main()
{
	foo(1);//2
	foo(a);//246
	int b = 3;
	foo(b); // 6
	int a = 4;
	foo(a);//8
	foo();//10
	system("pause");
	return 0;
}