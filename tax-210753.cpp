#include<iostream>
#include<stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int sal;
    int sum ;
    int tax;
    while(1)
    {
        cin >> sal;
        if(sal == 0)
        {
            break;
        }
        if(sal < 100001)
        {
            tax = 0;
        }
        if(sal > 100000 && sal < 1000001)
        {
            sal = sal-100000;
            tax = sal* 6/100;
        }
        else if(sal > 1000000 && sal < 5000001)
        {
            sal = sal-1000000;
            tax = sal * 12/100 + 54000;
        }
        else if(sal > 5000000 && sal < 10000001)
        {
            sal = sal-5000000;
            tax = sal * 20/100+54000+480000;
        }
        else if(sal > 10000000)
        {
            sal = sal-10000000;
            tax = sal*32/100+54000+480000+1000000;
        }

        cout << tax << endl;
    }
}
