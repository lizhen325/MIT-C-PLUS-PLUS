// remove the key word which is const
#include <iostream>

using namespace std;

class point
{
private:
	int x, y;
public:
	point(int i, int j) : x(i), y(j){}
	int get_x(){ return x; }
	int get_y(){ return y; }
	void two_times()
	{
		x *= 2;
		y *= 2;
	}
};

int main()
{
	point p(5, 2);
	p.two_times();
	cout << p.get_x() << endl;
	cout << p.get_y() << endl;
	system("pause");
	return 0;
}