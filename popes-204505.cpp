#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int y,p,x,j,k,ans1,ans2,count=1,max=0;
	vector <int> g;
    cin>> y>>p ;
    for(int i=0;i<p;i++)
    {
    		cin >> x;
			g.push_back(x);
	}
	j=0;
	k=j+1;
    while(k+1<p)
	{
		if(g[j]+y>g[k])
		{
			count++;
			k++;
		}
        else if(g[j]+y<=g[k])
		{
			if(count>max)
			{
				max=count;
				ans1=g[j];
				ans2=g[k-1];
			}
			j++;
			count--;
        }
	}
	cout<<max<<" "<<ans1<<" "<<ans2;
}
