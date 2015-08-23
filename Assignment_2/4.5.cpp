#include <iostream >

using namespace std;

int sum(int arr[], int length)
{
	int sum = 0;
	for (int i = 0; i < length; ++i)
	{
		sum += arr[i];
	}
	return  sum;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int length = sizeof(arr) / sizeof(0);
	int result = sum(arr, length);
	cout << result << endl;
	system("pause");
	return 0;
}

