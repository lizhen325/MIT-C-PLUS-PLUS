#include <iostream >
using namespace std;

void swap(int **num1, int **num2)
{
	int *temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
int main()
{	
	int x = 5, y = 6;
	int *ptr1 = &x;
	int *ptr2 = &y;
	swap(&ptr1, &ptr2);
	cout << *ptr1 << "," << *ptr2 << endl;
	system("pause");
	return 0;
}

