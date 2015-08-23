// This program will not compile.
// Because in the same scope, there are two different types definition for arg1.

#include <iostream >

using namespace std;

int main()
{
	int arg1;
	arg1 = -1;
	int x, y, z;
	char myDouble = '5';
	char arg1 = 'A ';
	cout << arg1 << "\n";
	system("pause");
	return 0;
}