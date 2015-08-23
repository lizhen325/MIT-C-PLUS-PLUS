#include <iostream >

using namespace std;

double sum(const double number1, const int number2)
{
	return number1 + number2;
}
int main()
{
	double result = sum(5.3,2.0);
	cout << result << endl;
	system("pause");
	return 0;
}

