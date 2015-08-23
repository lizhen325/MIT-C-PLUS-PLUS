#include <iostream >

using namespace std;

double sum(const double number1, const int number2, const int number3 = 0, const int number4 = 0)
{
	return number1 + number2 + number3 + number4;
}
int main()
{
	double result = sum(1.2,1);
	cout << result << endl;
	system("pause");
	return 0;
}

