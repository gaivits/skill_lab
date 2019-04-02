#include<iostream>

using namespace std;
int main()
{
    int sum = 0;
    int truc = 0;
    while(1)
    {
        int num;
        int n,w;
        cin >> n >> w;
        truc = 0;
        sum = 0;
        if(n == 0 && w == 0)
        {
            break;
        }
        for(int i = 0;i<n;i++)
        {
            cin >> num;
            sum = sum+num;
            if(sum > w)
            {
                truc++;
                sum = num;
            }
        }
        truc++;
        cout << truc << endl;
    }
}
