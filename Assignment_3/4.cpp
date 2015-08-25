#include <iostream>

using namespace std;

class PointArray
{
private:
	int *points;
	int size;
public:
	PointArray()
	{
		size = 0;
		points = new int[0];
	}
	PointArray(const int p[], const int length)
	{
		size = length;
		points = new int[size];
		for (int i = 0; i < length; ++i)
		{
			points[i] = p[i];
		}
	}
	PointArray(const PointArray &pv)
	{
		size = pv.size;
		points = new int[size];
		for (int i = 0; i < size; ++i)
		{
			points[i] = pv.points[i];
		}
	}
	~PointArray() { delete[] points; }
	void resize(int newsize)
	{
		int *new_points = new int[newsize];
		int minsize = (newsize > size) ?  size : newsize;
		for (int i = 0; i < newsize; ++i)
		{
			points[i] = new_points[i];
		}
		delete[]points;
		size = newsize;
		points = new_points;
	}
	void clear()
	{
		resize(0);
	}
	void push_back(const int &pv)
	{
		resize(size + 1);
		points[size - 1] = pv;
	}
	void insert(const int pos, const int &p)
	{
		resize(size + 1);
		for (int i = size - 1; i > 0; ++i)
		{
			points[i] = points[i-1];
		}
		points[pos] = p;
	}
	void remove(const int pos)
	{
		if (pos >= 0 && pos < size)
		{
			for (int i = pos; i < size - 2; i++)
			{
				points[i] = points[i + 1];
			}
			resize(size - 1);
		}
	}
	int *get(const int pos)
	{
		return pos >= 0 && pos < size ? points + pos : NULL;
	}
	const int *get(const int pos) const
	{
		return pos >= 0 && pos < size ? points + pos : NULL;
	}
};