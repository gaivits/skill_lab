#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i = 0;i<n;i++)
	{

	int num;
	cin >> num ;
	int keep = num;
        if(num == 0)
        {
            cout << "zero";
        }
	keep = keep/1000;
		if(keep == 1)
		{
		cout << "one thousand " ;
		}
		else if(keep == 2)
		{
		cout << "two thousand " ;
		}
		else if(keep == 3)
		{
		cout << "three thousand " ;
		}
		else if(keep == 4)
		{
		cout << "four thousand " ;
		}
		if(keep == 5)
		{
		cout << "five thousand " ;
		}
		else if(keep == 6)
		{
		cout << "six thousand " ;
		}
		else if(keep == 7)
		{
		cout << "seven thousand " ;
		}
		else if(keep == 8)
		{
		cout << "eight thousand " ;
		}
		else if(keep == 9)
		{
		cout << "nine thousand " ;
		}
		else if(keep == 10)
		{
		cout << "ten thousand " ;
		}
		keep = num;
		keep = keep%1000;
		keep = keep/100;
		if(keep == 1)
		{
		cout << "one hundred " ;
		}
		else if(keep == 2)
		{
		cout << "two hundred " ;
		}
		else if(keep == 3)
		{
		cout << "three hundred " ;
		}
		else if(keep == 4)
		{
		cout << "four hundred " ;
		}
		else if(keep == 5)
		{
		cout << "five hundred " ;
		}
		else if(keep == 6)
		{
		cout << "six hundred " ;
		}
		else if(keep == 7)
		{
		cout << "seven hundred ";
		}
		else if(keep == 8)
		{
		cout << "eight hundred " ;
		}
		else if(keep == 9)
		{
		cout << "nine hundred ";
		}
		keep = num;
		keep = keep%100;
		keep = keep/10;
		if(keep == 2)
		{
		cout << "twenty" ;
		}
		else if(keep == 3)
		{
		cout << "thirty" ;
		}
		else if(keep == 4)
		{
		cout << "forty" ;
		}
		else if(keep == 5)
		{
		cout << "fifty" ;
		}
		else if(keep == 6)
		{
		cout << "sixty" ;
		}
		else if(keep == 7)
		{
		cout << "seventy";
		}
		else if(keep == 8)
		{
		cout << "eighty" ;
		}
		else if(keep == 9)
		{
		cout << "ninety";
		}
		//cout << num;


		keep = num;
		keep = keep%100;
		if(keep == 10)
		{
		cout << "ten ";
		}
		else if(keep == 11)
		{
		cout << "eleven ";
		}
		else if(keep == 12)
		{
		cout << "twelve " ;
		}
		else if(keep == 13)
		{
		cout << "thirteen " ;
		}
		else if(keep == 14)
		{
		cout << "fourteen " ;
		}
		else if(keep == 15)
		{
		cout << "fifteen " ;
		}
		else if(keep == 16)
		{
		cout << "sixteen" ;
		}
		else if(keep == 17)
		{
		cout << "seventeen";
		}
		else if(keep == 18)
		{
		cout << "eighteen" ;
		}
		else if(keep == 19)
		{
		cout << "nineteen";
		}
		//cout << num << " " << keep;
		if(num % 100 > 20 && num%10 > 0)
		{
		cout << "-";
		}
		//keep = num;

		if(keep > 20 or keep < 10)
		{
			keep = keep%10;
			//keep = keep % 10;
			if(keep == 1)
			{
			cout << "one";
			}
			else if(keep == 2)
			{
			cout << "two";
			}
			else if(keep == 3)
			{
			cout << "three";
			}
			else if(keep == 4)
			{
			cout << "four";
			}
			else if(keep == 5)
			{
			cout << "five";
			}
			else if(keep == 6)
			{
			cout << "six";
			}
			else if(keep == 7)
			{
			cout << "seven";
			}
			else if(keep == 8)
			{
			cout << "eight";
			}
			else if(keep == 9)
			{
			cout << "nine";
			}
		}
		cout << endl;
	}
}
