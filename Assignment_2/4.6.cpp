#include <iostream >

using namespace std;

int sum( const int arr[], const int length)
{
	if (length == 0)
		return 0;
	else
		return arr[0] + sum((arr + 1), (length - 1));
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

