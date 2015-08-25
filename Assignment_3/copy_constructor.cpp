#include <iostream>

using namespace std;

class integerarray
{
public:
	int size;
	int *data;

	integerarray(int a)
	{
		data = new int[a];
		this->size = a;
	}
	/*integerarray &operator=(integerarray &s)
	{
		s.size = size;
		s.data = new int[size];
		for (int i = 0; i < size; ++i)
		{
			data[i] = s.data[i];
		}
	}*/
	integerarray(integerarray &s)
	{
		data = new int[s.size];
		size = s.size;
		for (int i = 0; i < size; ++i)
		{
			data[i] = s.data[i];
		}

	}
	~integerarray()
	{
		delete[]data;
	}
};

int main()
{
	integerarray A(2);
	A.data[0] = 1;
	A.data[1] = 2;
	if (true)
	{
		integerarray B = A;
	}
	cout << A.data[0];
	system("pause");
	return 0;
}