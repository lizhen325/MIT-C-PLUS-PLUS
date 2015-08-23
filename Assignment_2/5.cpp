#include <iostream >
#include <cmath>
using namespace std;

double compute_PI(const int n)
{
	
	int dartcycle = 0;

	double x, y;

	for (int i = 0; i < n; ++i)
	{
		x = rand() / (double)RAND_MAX;
		y = rand() / (double)RAND_MAX;
		if (sqrt(x*x + y*y) < 1)
			dartcycle++;
	}
	return dartcycle / static_cast < double >(n)* 4;
}
int main()
{	
	double result = compute_PI(5000000);
	cout << result << endl;
	system("pause");
	return 0;
}

