#include <iostream >

using namespace std;

int main()
{
	int n;
	while (1)
	{
		cout << "Please type a number : ";
		cin >> n;
		if (n % 5 != 0)
		{
			cout << " continue" << endl;
			continue;
		}
		cout << n / 5 << endl;
	}
	system("pause");
	return 0;
}