#include <iostream >

using namespace std;

int main()
{
	int n;
	while (1)
	{
		cout << "Please type a number : ";
		cin >> n;
		if (n < 0)
		{
			cout << "Good Bye!";
			break;
		}
		cout << n / 5 << endl;
	}
	system("pause");
	return 0;
}