#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int m,n;
    //int sum1 = 0;
    int check = 0;
    int cnt = 0;
    cin >> m >> n;
    int arr1[m],arr2[n];
    for(int i = 0;i<m;i++)
    {
        cin >> arr1[i];
    }
    for(int j = 0;j<n;j++)
    {
        cin >> arr2[j];
    }
    sort(arr1,arr1+m);
    sort(arr2,arr2+n);
    for(int k = 0;k<n;k++)
    {
        while(check < m)
        {
            //cout << "in while";
            if(arr1[check] >= arr2[k])
            {
                arr1[check] = 0;
                check = k;
                cnt++;
                break;
            }
            check++;
        }
    }
    cout << cnt;

}
