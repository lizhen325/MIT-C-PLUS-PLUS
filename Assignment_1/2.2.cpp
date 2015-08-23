#include <iostream>
#include <string>
using namespace std;

int main()
{
	//using for loop
	/*const char *s = "Hello World!";
	int length = strlen(s);
	for (int i = 0; i < length; ++i)
	{
		cout << s[i];
	}
	cout << endl;*/

	// using while loop
	/*const char *s = "Hello World!";
	int length = strlen(s);
	int i = 0;
	while (i < length)
	{
		cout << s[i];
		++i;
	}
	cout << endl;*/

	//using do while loop

	const char *s = "Hello World!";
	int length = strlen(s);
	int i = 0;
	do
	{
		cout << s[i];
		i++;
	} while (i < length);
	cout << endl;
	system("pause");
	return 0;
}