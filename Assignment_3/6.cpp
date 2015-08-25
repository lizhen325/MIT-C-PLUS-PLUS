#include <iostream>
#include <string>
using namespace std;

const string vowels = "aeiou";

string piglatinify(const string s)
{
	if (s.size() == 0)
		return s;
	if (s.find("qu") == 0)
	{
		return s.substr(2, s.size() - 2) + "-" + s.substr(0, 2) + "ay";
	}
	else if (vowels.find(s[0]) != string::npos) 
	{ 
		return s + " way ";  
	} 
	else 
	{ 
		return s. substr (1 , s. size () -1) + " -" + s [0] + " ay "; 
	} 
}

int main()
{
	string s = "beast";
	string result = piglatinify(s);
	cout << result << endl;
	system("pause");
	return 0;
}