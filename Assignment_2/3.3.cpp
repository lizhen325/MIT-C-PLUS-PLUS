#include <iostream >

using namespace std;

double double_number(int &number)
{
	return number * 2;
}
int main()
{
	double result = double_number(5);
	cout << result << endl;
	system("pause");
	return 0;
}

