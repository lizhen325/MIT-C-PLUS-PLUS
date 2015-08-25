// p is allocated using new, but is never deallocated with delete. 
//Every piece of memory allocated with new must be deallocated somewhere with a corresponding delete

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
};
int main()
{
	point *p = new point(5, 4);
	cout << p->get_x() << "," << p->get_y << endl;
	delete p;
	system("pause");
	return 0;
}