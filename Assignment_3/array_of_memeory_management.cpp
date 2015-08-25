#include <iostream>

using namespace std;


int main()
{
	int num;
	cout << "how many numbers do you need ? ";
	cin >> num;
	int *arr = new int[num];
	for (int i = 0; i < num; ++i)
	{
		cout << "enter item: " << i << ": ";
		cin >> arr[i];
	}
	for (int i = 0; i < num; ++i)
		cout << arr[i] << ",";
	delete[]arr;

	system("pause");
	return 0;
}