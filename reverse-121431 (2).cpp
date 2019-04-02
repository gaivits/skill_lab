#include<iostream>
#include<string.h>
using namespace std;
string swapstring(string str,int start,int ended)
{
    start--;
    ended--;
    char temp = str[start];
    str[start] = str[ended];
    str[ended] = temp;
    return str;
}

int main()
{
    int n;
    cin>>n;
    string answer[n];
    for(int i=0;i<n;i++)
    {
        string input_str = "";
        cin>>input_str;
        int reverses;
        cin>>reverses;
        int start[reverses];
        int ends[reverses];
        for(int j = 0;j<reverses;j++)
        {
            cin>>start[j];
            cin>>ends[j];
        }
        for(int j = 0;j<reverses;j++)
        {
            for(int k = 0; k <= (ends[j] - start[j])/2; k++ )
            {
                input_str = swapstring(input_str, start[j]+k , ends[j]-k);
            }
    }
    answer[i] = input_str;
}
    for(int i=0;i<n;i++)
    {
    cout<<answer[i]<<endl;
    }
}
