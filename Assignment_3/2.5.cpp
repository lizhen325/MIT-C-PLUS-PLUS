// delete []nums not delete nums.
// because nums is an array.
#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;
	int *nums = new int[num];
	for (int i = 0; i < num; i++)
	{
		cin >> nums[i];
	}
	for (int i = 0; i < num; ++i)
	{
		cout << nums[i] << endl;
	}

	delete [] nums;
	system("pause");
	return 0;
}