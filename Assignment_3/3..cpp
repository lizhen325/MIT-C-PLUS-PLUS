

#include <iostream>

using namespace std;

class point
{
private:
	int y;
	int x;
public:
	point() = default;
	point(int i=0, int j=0) : x(i), y(j){}
	int get_x()const { return x; }
	int get_y()const { return y; }
	void setX(const int new_x);
	void setY(const int new_y);

};
void point::setX(const int new_x)
{
	x = new_x;
}

void point::setY(const int new_y)
{
	y = new_y;
}
int main()
{
	point *p = new point(5, 4);
	cout << p->get_x() << "," << p->get_y << endl;
	delete p;
	system("pause");
	return 0;
}