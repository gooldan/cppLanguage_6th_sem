#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	double sum = 0;
	for (int i = 0; i <= n; ++i)
	{
		sum += 1 / pow(2*i+1,3);
	}
	cout << sum;
	cin >> n;
	return 0;
}