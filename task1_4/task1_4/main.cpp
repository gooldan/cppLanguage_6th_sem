#include <iostream>
#include <vector>
using namespace std;
vector<int> almostSimple;
void sieve(int n)
{
	vector<int> simpleNum(n + 1, 1);
	simpleNum[0] = 0;
	simpleNum[1] = 0;
	vector<int> onlySimpleNum;
	int sqrtN = sqrt(n);
	for (int i = 2; i <= n; ++i)
	{		
		if (simpleNum[i] == 1 && i <= sqrtN)
		{
			for (int j = i*i; j <= n; j += i)
			{
				simpleNum[j] = 0;
			}
			onlySimpleNum.push_back(i);
		}
		else
		{
			for (int j = 0; j < onlySimpleNum.size(); ++j)
			{
				if (i%onlySimpleNum[j] == 0 && simpleNum[i / onlySimpleNum[j]] == 1)
				{
					almostSimple.push_back(i);
					break;
				}
			}
		}
		
	}
}

int main()
{
	int num = 0;
	cin >> num;
	sieve(num);

	vector<int> trueNumbers(num, 0);	
	for (int i = 0; i < almostSimple.size(); ++i)
	{
		for (int j = almostSimple.size()-1; j>= i; --j)
		{
			if (almostSimple[i] + almostSimple[j] == num)
			{
				cout << "Yes; " << almostSimple[i] << " " << almostSimple[j] << endl;
				cin >> num;
				return 0;
			}
		}
	}	
	cout << "Impossible!" << endl;
	cin >> num;
	return 0;
}