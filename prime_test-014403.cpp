#include<iostream>
#include<math.h>
using namespace std;
int main()
{

	int num,i,count=0;
    cin>>num;
    if(num == 1)
    {
        cout<< "NO";
    }
	for(i=2;i<sqrt(num);i++)
	{

		if(num%i==0)
		{
			count++;
			break;
		}
	}
	if(count==0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}

}
