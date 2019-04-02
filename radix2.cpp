#include<iostream>
#include<string.h>
using namespace std;
void printt(char i,int j)
{
    if(i == '0')
    {
        if(j == 0)
        {
            cout << "*****" << " ";
        }
        else if(j == 1)
        {
            cout << "** **" << " ";
        }
        else if(j == 2)
        {
            cout << "** **" << " ";
        }
        else if(j == 3)
        {
            cout << "** **" << " ";
        }
        else if(j == 4)
        {
            cout << "*****" << " ";
        }
    }
    if(i == '1')
    {
        if(j == 0)
        {
            cout << "**" << " ";
        }
        else if(j == 1)
        {
            cout << "**" << " ";
        }
        else if(j == 2)
        {
            cout << "**" << " ";
        }
        else if(j == 3)
        {
            cout << "**" << " ";
        }
        else if(j == 4)
        {
            cout << "**" << " ";
        }
    }
    if(i == '2')
    {
        if(j == 0)
        {
            cout << "*****" << " ";
        }
        else if(j == 1)
        {
            cout << "    *" << " ";
        }
        else if(j == 2)
        {
            cout << "*****" << " ";
        }
        else if(j == 3)
        {
            cout << "*    " << " ";
        }
        else if(j == 4)
        {
            cout << "*****" << " ";
        }
    }
    if(i == '3')
    {
        if(j == 0)
        {
            cout << "*****" << " ";
        }
        else if(j == 1)
        {
            cout << "    *" << " ";
        }
        else if(j == 2)
        {
            cout << "*****" << " ";
        }
        else if(j == 3)
        {
            cout << "    *" << " ";
        }
        else if(j == 4)
        {
            cout << "*****" << " ";
        }
    }
    if(i == '4')
    {
        if(j == 0)
        {
            cout << "*   *" << " ";
        }
        else if(j == 1)
        {
            cout << "*   *" << " ";
        }
        else if(j == 2)
        {
            cout << "*****" << " ";
        }
        else if(j == 3)
        {
            cout << "    *" << " ";
        }
        else if(j == 4)
        {
            cout << "    *" << " ";
        }
    }
    if(i == '5')
    {
        if(j == 0)
        {
            cout << "*****" << " ";
        }
        else if(j == 1)
        {
            cout << "*    " << " ";
        }
        else if(j == 2)
        {
            cout << "*****" << " ";
        }
        else if(j == 3)
        {
            cout << "    *" << " ";
        }
        else if(j == 4)
        {
            cout << "*****" << " ";
        }
    }
    if(i == '6')
    {
        if(j == 0)
        {
            cout << "*****" << " ";
        }
        else if(j == 1)
        {
            cout << "*    " << " ";
        }
        else if(j == 2)
        {
            cout << "*****" << " ";
        }
        else if(j == 3)
        {
            cout << "*   *" << " ";
        }
        else if(j == 4)
        {
            cout << "*****" << " ";
        }
    }
    if(i == '7')
    {
        if(j == 0)
        {
            cout << "*****" << " ";
        }
        else if(j == 1)
        {
            cout << "    *" << " ";
        }
        else if(j == 2)
        {
            cout << "    *" << " ";
        }
        else if(j == 3)
        {
            cout << "    *" << " ";
        }
        else if(j == 4)
        {
            cout << "    *" << " ";
        }
    }
    if(i == '8')
    {
        if(j == 0)
        {
            cout << "*****" << " ";
        }
        else if(j == 1)
        {
            cout << "*   *" << " ";
        }
        else if(j == 2)
        {
            cout << "*****" << " ";
        }
        else if(j == 3)
        {
            cout << "*   *" << " ";
        }
        else if(j == 4)
        {
            cout << "*****" << " ";
        }
    }
    if(i == '9')
    {
        if(j == 0)
        {
            cout << "*****" << " ";
        }
        else if(j == 1)
        {
            cout << "*   *" << " ";
        }
        else if(j == 2)
        {
            cout << "*****" << " ";
        }
        else if(j == 3)
        {
            cout << "    *" << " ";
        }
        else if(j == 4)
        {
            cout << "*****" << " ";
        }
    }
}
int main()
{
    int i;
    int re;
    string keep;
    cin >> i;
    int num;
    int base;
    for(int k = 0;k<i;k++)
    {
        cin >> num >> base;
        while(num >= 1)
        {
            re = num%base;
            num = num/base;
            keep += '0'+re;
        }
         for(int a = 0;a<5;a++)
            {
             for(int x = keep.size()-1;x>=0;x--)
                {
                    printt(keep[x],a) ;
                }
                cout << endl;
            }
        keep = "";
    }
}
