#include <iostream>
#include <ctime>

using namespace std;

int a[1000] = { 0 };

int search(int *beg,int *end)
{
		int pos = (end - beg) / 2;
		if (pos == 0)
			return end - a;
		if (*(beg + pos) == 0)
			return search(beg, end - pos);
		else
			return search(beg + pos, end);
		
}
int main()
{
	srand(time(0));
	int len = rand() % 1000+1;
	for (int i = 0; i < len; ++i)
	{
		a[i] = i+1;
	}
	int t = search(a, &a[1000]);
	cin >> t;
}