#include <iostream>

using namespace std;
void reverse(int *beg,int *end)
{
	int temp =0;
	for (int *b = beg,*e=end; b < end - (end - beg) / 2; b++,e--)
	{
		temp = *b;
		*b = *e;
		*e = temp;		
	}
}
int main()
{
	int a[15];
	for (int i = 0; i < 15; ++i)
		a[i] = i;
	reverse(a, a + 15);
	return 0;
}