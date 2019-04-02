#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int x,y,t=0;
	cin>>x;
	cin>>y;
	int a[y][x];
	for( int i=0;i<y;i++ )
	{
		for( int j=0;j<x;j++ )
		{
			cin>>a[i][j];
		}
	}
	
//	for( int i=0;i<y;i++ )
//	{
//		cout<<endl;
//		for( int j=0;j<x;j++ )
//		{
//			cout<<a[i][j]<<" ";
//		}
//	}
	for( int i=0;i<y;i++ )
	{
		for( int j=0;j<x;j++ )
		{
			t=0;
			if( a[i][j]==1 )
			{
				if( a[i-1][j]==1 )
				{
					t++;
				}
				if( a[i+1][j]==1 )
				{
					t++;
				}
				if( a[i][j+1]==1 )
				{
					t++;
				}
				if( a[i][j-1]==1 )
				{
					t++;
				}
				if( a[i-1][j-1]==1 )
				{
					t++;
				}
				if( a[i-1][j+1]==1 )
				{
					t++;
				}
				if( a[i+1][j-1]==1 )
				{
					t++;
				}
				if( a[i+1][j+1]==1 )
				{
					t++;
				}
				if( t<2 ){
					cout<<"No";
					return 0;
				}
			}
		}
	}
	cout<<"Yes";
}
