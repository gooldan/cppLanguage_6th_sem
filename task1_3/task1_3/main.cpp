#include <iostream>

using namespace std;

int main()
{
	int a[10] = { 1, 2, 7, 9, 5, 0, 0, 0, 0, 0 };
	int *d = a;
	int count = 0;
	while (*d++ != 0)
		count++;
	cout << count;
	cin >> count;
	return 0;
}