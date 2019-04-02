#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int r;
    cin>> r;
    int maxs = 1;
    int time1 = 1;
    int time2 = 1;
    for(int i=0;i<n;i++)
    {
            if(i==0)
            {
                int time;
                cin>>time;
                time1 = r*time;
            }
            else
            {
                cin>>time2;
                int fr = time1/time2;
                if( fr*time2 > maxs)
                {
                    maxs = fr * time2;
                }
            }
    }
    cout<<maxs<<endl;
}

