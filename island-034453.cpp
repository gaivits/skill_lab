#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int  n;
    cin>>n;
    int area[n][n] ;
    for(int i=0;i<n;i++)
    {
            char input[n] ;
            cin>>input;
        for(int j=0;j<n;j++)
        {
            area[i][j] = 48-input[j];
        }
    }
    int height[n][n];//array for storing height
    int ansrow = -1;
    int anscol = -1;
    int ansarea = 0;
    for(int i=0;i<n;i++)
        {
         for(int j=0;j<n;j++)
            {
                int k=i;
                int cnt =0;
                while(area[k][j] !=0 && k>=0 )
                {
                    cnt++;
                    k--;
                }
            height[i][j] = cnt;
         }
         for(int k=0;k<n;k++)
         {
             if(height[i][k] != 0)//Ignore with 0
             {
                int l = height[i][k];//store height
                int tempsum = 0;
                for(int m=k;m<(k+l); m++)
                {
                    tempsum+=height[i][m];
                }
                if(tempsum == (l*l) )
                {
                    if((l*l)>ansarea)
                        {
                        ansarea = l*l;
                        ansrow = (i+1)-(l-1);
                        anscol = (k+1);
                        k = k+(l-1);
                        }
                }
             }
         }
    }
    cout<<ansrow<<" "<<anscol<<endl;
    cout<<ansarea<<endl;
}

