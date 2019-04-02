#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int x = 0;
    int y = 0;
    for(int i = 0;i<a.size();i++)
    {

        if(a[i] == 'N')
        {
            y = y+1;
        }
        if(a[i] == 'W')
        {
            x = x-1;
        }
        if(a[i] == 'E')
        {
            x = x+1;
        }
        if(a[i] == 'S')
        {
            y = y-1;
        }
        if(a[i] == 'Z')
        {
            x = 0;
            y = 0;
        }
}
    cout << x << " " << y;
}
