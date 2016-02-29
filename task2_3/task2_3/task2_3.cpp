#include <iostream>

using namespace std;
void order(int &x, int &y, int &z)
{
	if (x > y)
	if (x > z)
		swap(x, z);		
	else
		swap(x, y);
	else
	if (z < y)
		swap(z, y);
	else
		return;
	order(x, y, z);
}
int main()
{
	int a = 5, b = 1, c = 3;
	order(a, b, c);
	return 0;
}