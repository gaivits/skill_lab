#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int data,flower=0,count=0,multi;
	cin>>data;
	
	int arr[data+10][data+10];
	int arr2[data+10][data+10];
	
	for(int i=0;i<data;i++)
	{
		for(int j=0;j<data;j++)
		{
			cin>>arr[i][j];
			arr2[i][j]=0;
		}
	}
//	for(int i=0;i<data;i++)
//	{
//		for(int j=0;j<data;j++)
//		{
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	for(int i=0;i<data;i++)
	{
		for(int j=0;j<data;j++)
		{
			if(arr[i][j]!=0)
			{
				flower=arr[i][j];
				
				multi=flower*2+1;
				for(int k=0;k<multi;k++)
				{
					for(int z=0;z<multi;z++)
					{
						arr2[i-flower+k][j-flower+z]=1;
					}
				}
			}
			
		}
	}
	for(int i=0;i<data;i++)
	{
		for(int j=0;j<data;j++)
		{
			if(arr2[i][j]==0)
			{
				count++;
			}
		}
	}
	cout<<count;
}
