#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int money,n;
    cin >> money >> n;
    int arr[n];
    int nub = 0;
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int x = 0;x<n;x++)
    {
        if(money >= arr[x])
        {
            money = money-arr[x];
            nub++;
        }
    }
    cout << nub;
}
