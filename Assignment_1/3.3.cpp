#include <iostream >

using namespace std;

int main()
{
	int n, value;
	int *a = new int;
	cout << "how many numbers do you need: " << endl;
	cin >> n;
	cout << "Please type " << n << " numbers: ";
	for (int i = 0; i < n; ++i)
	{
		cin >> value;
		a[i] = value;
	}
	cout << "the first number in " << n << " numbers is: " << a[0] << endl;
	system("pause");
	return 0;
}