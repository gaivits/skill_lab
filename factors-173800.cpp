#include<iostream>
using namespace std;
int main()
{
	int i;
	cin >> i;
	int j = 2;
	while(i!=1)
	{
		while(i%j == 0)
		{
			if(i%j == 0)
			{
				cout << j << endl;
				i = i/j;
			}
		}
		j++;
	}
}
