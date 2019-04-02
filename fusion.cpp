#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int m_pow;
    int cnt=0;
    cin >> m_pow;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int j = 0;j<n;j++)
    {
        if(arr[j]<=m_pow)
        {
            m_pow = m_pow-arr[j];
            cnt++;
        }
    }
    cout << cnt;
}
