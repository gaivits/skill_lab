#include<iostream>
using namespace std;
int main()
{
       int coke;
        int all;
        int free;
        cin >> coke;
        all = coke;
        while(coke >= 3)
        {
            free =coke/3;
            all = all+free;
            coke = coke%3;
            if(coke<3)
            {
                if(coke+free >= 3)
                {
                   coke = coke+free;
                }
                else
                {
                    break;
                }
            }

        }
        cout << all+coke;
}
