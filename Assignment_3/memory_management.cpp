#include <iostream>

using namespace std;

int *getptrtofive()
{
	int *x = new int;
	*x = 5;
	return x;
}
	int main()
{
	int *p = getptrtofive();
	cout << *p << endl;
	delete p;
	system("pause");
	return 0;
}