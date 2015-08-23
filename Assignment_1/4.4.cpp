#include <iostream >

using namespace std;

int main()
{
	short number;
	cout << "Enter a number";
	cin >> number;
	if (number < 0)
	{
		cout << "negative number is not allowed";
		return 1;
	}
	if (number > 20)
	{
		// because the number of type is short
		cout << "program will not produce correct result" << endl;
	}
	cout << "The factorial of " << number << " is";
	int accumulator = 1;
	for (; number > 0; accumulator *= number--)
		cout << accumulator << endl;
	system("pause");
	return 0;
}