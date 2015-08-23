#include <iostream >
using namespace std;

void reverse(int arr[], const int length)
{
	int *ptr = arr;
	for (int i = length - 1; i >= 0; i--)
	{
		cout << *(ptr + i);
		if (i >= 0)
			cout << ",";
	}
	

}
int main()
{	
	int arr[] = { 1, 6, 3, 7, 5 };
	int length = sizeof(arr) / sizeof(0);
	reverse(arr, length);
	system("pause");
	return 0;
}

