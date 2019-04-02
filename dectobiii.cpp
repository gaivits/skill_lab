#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int num;
    int base;
    int re;
    string ppp;
    int n;
    cin >> n;
    for(int a = 0;a<n;a++)
    {
        cin >> num >> base;
        if(num == 0)
        {
            cout << "0";
        }
        while(num >= 1)
        {
        re = num%base;
        num = num/base;
        //cout << re;
        ppp += '0'+re;
        }
         for(int x = ppp.size()-1;x>=0;x--)
        {
            cout << ppp[x];
        }
        ppp = "";
        cout << endl;
    }



}
