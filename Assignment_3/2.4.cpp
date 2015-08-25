// scope: point::setx

#include <iostream>

using namespace std;

class point
{
private:
	int y;
	int x;
public:
	point(int i, int j) : x(i), y(j){}
	int get_x(){ return x; }
	int get_y(){ return y; }
	void two_times()
	{
		x *= 2;
		y *= 2;
	}
	void offset(int new_x) { x = new_x; }
	void setx(int new_x);
};
void point::setx(int new_x)
{
	x = new_x;
}

int main()
{
	point p(5, 2);
	p.two_times();
	cout << p.get_x() << endl;
	cout << p.get_y() << endl;
	p.offset(4);
	cout << p.get_x() << endl;
	p.setx(2);
	cout << p.get_x() << endl;
	system("pause");
	return 0;
}