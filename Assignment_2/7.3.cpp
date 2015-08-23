#include <iostream >
using namespace std;

void swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
int main()
{	
	int a = 10, b = 5;
	swap(a, b);
	cout << a << "," << b << endl;
	system("pause");
	return 0;
}

