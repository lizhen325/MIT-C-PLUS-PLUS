// The program compiles
// The output is -1
#include <iostream >

using namespace std;

int main()
{
	int arg1;
	arg1 = -1;
	{
		char arg1 ='A';
	}
	cout << arg1 << endl;
	system("pause");
	return 0;
}