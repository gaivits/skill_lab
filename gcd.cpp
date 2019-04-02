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
int main()
{
    int a,b;
    cin >> a >> b;
    int m = gcd(a,b);
    cout << m;
}
