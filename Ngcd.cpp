#include<iostream>
using namespace std;
int gcd(int x,int y)
{
    if(x == 0)
    {
        return y;
    }
    else
    {
        return gcd(y%x,x);
    }
}
int ngcd(int arr[],int n)
{
    int ans = arr[0];
    for(int i = 0;i<n;i++)
    {
        ans = gcd(arr[i],ans);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int res;
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
        res = sizeof(arr[i])/sizeof(arr[0]);
        res = ngcd(arr,res);
    }
    cout << res;
}
