#include <iostream>

using namespace std;

int main()
{
	int a[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
	int (*p)[4] = a;
	for (int i = 0; i < 3; ++i)
	{
		cout << *(*(p+i) + 0) << '\t' << *(*(p+i) + 1) << '\t' << *(*(p+i) + 2) << '\t' << *(*(p+i) + 3) << endl;
	}

	

	return 0;
}