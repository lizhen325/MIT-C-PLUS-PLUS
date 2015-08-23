#include <iostream >

using namespace std;

int main()
{
	int  n;
	int value;
	int sum = 0;
	double average = 0.0;
	int *a = new int;
	cout << "type how many numbers do you need:  ";
	cin >> n;
	cout << endl;
	cout << "input " << n << " numbers : ";
	for (int i = 0; i < n; ++i)
	{
		cin >> value;
		a[i] = value;
		sum += value;

	}
	cout << "Sum is: " << sum << endl;
	average = double (sum) / n;
	cout << "average is : " << average << endl;
	int max = a[0];
	int min = a[0];
	for (int i = 1; i < n; ++i)
	{
		if (a[i] > max)
			max = a[i];
		else if (a[i] < min)
			min = a[i];
	}
	cout << "maximum number is: " << max << endl;
	cout << "minimum number is: " << min << endl;
	cout << "range is " << max - min << endl;
	system("pause");
	return 0;
}