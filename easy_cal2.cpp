#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    for(int i = 0;i<5;i++)
    {
      for(int j = 0;j<a.size();j++)
      {
          if(a[j] == '1')
          {
              cout << "*" << " ";
          }
          if(a[j] == '2')
          {
              if(i == 0)
              {
                  cout << "*****" << " ";
              }
              else if(i == 1)
              {
                  cout << "    *" << " ";
              }
              else if(i == 2)
              {
                  cout << "*****" << " ";
              }
              else if(i == 3)
              {
                  cout << "*    " << " ";
              }
              else if(i == 4)
              {
                  cout << "*****" << " ";
              }
          }
          if(a[j] == '3')
          {
              if(i == 0)
              {
                  cout << "*****" << " ";
              }
              else if(i == 1)
              {
                  cout << "    *" << " ";
              }
              else if(i == 2)
              {
                  cout << "*****" << " ";
              }
              else if(i == 3)
              {
                  cout << "    *" << " ";
              }
              else if(i == 4)
              {
                  cout << "*****" << " ";
              }
          }
           if(a[j] == '4')
          {
              if(i == 0)
              {
                  cout << "*   *" << " ";
              }
              else if(i == 1)
              {
                  cout << "*   *" << " ";
              }
              else if(i == 2)
              {
                  cout << "*****" << " ";
              }
              else if(i == 3)
              {
                  cout << "    *" << " ";
              }
              else if(i == 4)
              {
                  cout << "    *" << " ";
              }
          }
          if(a[j] == '5')
          {
              if(i == 0)
              {
                  cout << "*****" << " ";
              }
              else if(i == 1)
              {
                  cout << "*    " << " ";
              }
              else if(i == 2)
              {
                  cout << "*****" << " ";
              }
              else if(i == 3)
              {
                  cout << "    *" << " ";
              }
              else if(i == 4)
              {
                  cout << "*****" << " ";
              }
           }
           if(a[j] == '6')
          {
              if(i == 0)
              {
                  cout << "*****" << " ";
              }
              else if(i == 1)
              {
                  cout << "*    " << " ";
              }
              else if(i == 2)
              {
                  cout << "*****" << " ";
              }
              else if(i == 3)
              {
                  cout << "*   *" << " ";
              }
              else if(i == 4)
              {
                  cout << "*****" << " ";
              }
           }
           if(a[j] == '7')
          {
              if(i == 0)
              {
                  cout << "*****" << " ";
              }
              else if(i == 1)
              {
                  cout << "    *" << " ";
              }
              else if(i == 2)
              {
                  cout << "    *" << " ";
              }
              else if(i == 3)
              {
                  cout << "    *" << " ";
              }
              else if(i == 4)
              {
                  cout << "    *" << " ";
              }
           }
           if(a[j] == '8')
          {
              if(i == 0)
              {
                  cout << "*****" << " ";
              }
              else if(i == 1)
              {
                  cout << "*   *" << " ";
              }
              else if(i == 2)
              {
                  cout << "*****" << " ";
              }
              else if(i == 3)
              {
                  cout << "*   *" << " ";
              }
              else if(i == 4)
              {
                  cout << "*****" << " ";
              }
           }
           if(a[j] == '9')
          {
              if(i == 0)
              {
                  cout << "*****" << " ";
              }
              else if(i == 1)
              {
                  cout << "*   *" << " ";
              }
              else if(i == 2)
              {
                  cout << "*****" << " ";
              }
              else if(i == 3)
              {
                  cout << "    *" << " ";
              }
              else if(i == 4)
              {
                  cout << "*****" << " ";
              }
           }
           if(a[j] == '0')
          {
              if(i == 0)
              {
                  cout << "*****" << " ";
              }
              else if(i == 1)
              {
                  cout << "*   *" << " ";
              }
              else if(i == 2)
              {
                  cout << "*   *" << " ";
              }
              else if(i == 3)
              {
                  cout << "*   *" << " ";
              }
              else if(i == 4)
              {
                  cout << "*****" << " ";
              }
           }
        }
    cout << endl;
    }
}
