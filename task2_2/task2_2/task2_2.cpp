#include <iostream>

using namespace std;

int main()
{
	int* a[10];
	int i = 0;
	for (int **arr = a; arr < a+10; *arr++)
	{
		int *t = new int[i + 1]{};
		*arr = t;
		t = *arr + i;
		*t = 1;
		i++;
	}
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			cout << a[i][j] << " ";
		}
		delete[] a[i];
		cout << endl;
	}

	return 0;
}