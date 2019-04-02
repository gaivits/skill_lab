#include<iostream>
using namespace std;
int domino(int x)
{
    if(x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return domino(x-1)+domino(x-2);
    }
}
int main()
{
    int n;
    cin >> n;
    cout << domino(n);
}
