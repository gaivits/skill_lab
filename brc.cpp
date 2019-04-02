#include<iostream>
#include<vector>
using namespace std;
int main() {
vector<char> stck;
int closebck =0;
string brck ;
cin>>brck;

int n=brck.length();
for(int i=0;i<n;i++)
{

    if( brck[i] == '(')
        {
            stck.push_back('(');
        }
    else if(brck[i] == ')')
        {
            if(stck.size()>0)
            {
            stck.erase(stck.begin() + stck.size()-1);
            }
            else
            {
           closebck++;
            }
        }
}
cout<<closebck+stck.size()<<endl;

}
