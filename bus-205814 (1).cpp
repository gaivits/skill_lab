#include <stdio.h>
#include <iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,d,r;
	int a=0;
	while(1)
    {
		cin>>n>>d>>r;
		if(n==0 && d==0 && r==0)
            {
			break;
            }
		else
		{
			int x[n];
			int y[n];
			for(int i=0;i<n;i++)
			{
				cin>>x[i];
			}
			for(int i=0;i<n;i++)
			{
				cin>>y[i];
			}
			sort(x,x+n);
			sort(y,y+n, greater<int>());
			int v[n];
			for(int j=0;j<n;j++)
			{
				v[j]=x[j]+y[j];
				if(v[j]>d)
				{
					a=a+(v[j]-d);
				}
			}
			a=a*r;
			cout<<a<<endl;
			a=0;
		}
	}
}
