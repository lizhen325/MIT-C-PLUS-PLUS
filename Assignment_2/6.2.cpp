#include <iostream >
#include <cmath>
using namespace std;

void print_Array(int arr[], int length)
{
	for (int i = length - 1; i >= 0; i--)
	{
		cout << arr[i];
		if (i <= length - 1)
			cout << ",";
	}
}
int main()
{	
	int arr[] = { 1, 2, 3, 4, 5 };
	int length = sizeof(arr) / sizeof(0);
	print_Array(arr, length);
	system("pause");
	return 0;
}

