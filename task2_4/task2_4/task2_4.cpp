#include <iostream>

using namespace std;
void sqr(int *x)
{
	int t = *x;
	*x = t*t;
}
int main()
{
	int i = 5;
	sqr(&i);
	return 0;
}