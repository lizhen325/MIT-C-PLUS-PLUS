#include <iostream >

using namespace std;

int main()
{
	int n;
	while (1)
	{
		cout << "Please type a number : ";
		cin >> n;
		cout << (n % 5 == 0) && (n >= 0) ? n / 5 : -1;
		cout << endl;
	}
	system("pause");
	return 0;
}