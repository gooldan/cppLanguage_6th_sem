#include <iostream>

using namespace std;

int main()
{
	char c;
	int count = 0;
	int sum = 0;
	cin >> c;
	while (c != '0')
	{
		sum += c - '0';
		count++;
		cin >> c;
	}
	cout << (double)sum / count;
	cin >> c;
	return 0;
}