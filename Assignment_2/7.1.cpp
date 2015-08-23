#include <iostream >
using namespace std;

int strlength(const char * string)
{
	int length = 0;
	while (*(string + length) != NULL)
	{
		length++;
	}
	return length;
}
int main()
{	
	char *s = "lizhen";
	int result = strlength(s);
	cout << result << endl;
	system("pause");
	return 0;
}

