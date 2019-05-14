#include<stdio.h>
#include<iostream>

using namespace std;

char land[150][150];
int check_size[1] ;
int run = 0;
int check,pluss;
int Size = 1;
int num_box ;
int find_row,find_col;

int find_island(int row, int col)
{
    int count;

    for(int k = row;k<num_box;k++)
    {
        for(int m = col;m<num_box;m++)
        {
//            cout << endl;
//            round ++;
//            cout << "+++++++++++++++++++++++++++++ROUND"<<round<<"+++++++++++++++++++++++++++"<<endl;
            if( land[k][m] == '0')
            {
//                cout << "Valure this ZeRO"<<endl;

            }
            else
            {
                int keep_k = k ;
                int keep_m = m ;
                pluss = 1;
                while(pluss<num_box)
                {
                    count = 0;
                    int row1 = k+pluss;
                    int col1 = m+pluss;
//                    cout << "plus = "<<pluss<<endl<<endl;
                    for(int c = k ; c <= row1 ;c++)
                    {
                        for(int d = m ; d <= col1 ;d++)
                        {
//                            cout <<"k = "<<k<<" m = "<<m<<" || ";
//                            cout <<"c = "<<c<<" d = "<<d<<" || ";

                            //cout << "Size = "<<Size<<endl;
//                            cout <<"Value =  " << land[c][d]<<endl;
                            if( land[c][d] != '0')
                            {
//                                cout<<"c TRUE = "<<c<<" || "<<"d TRUE = "<<d<<endl;
//                                cout <<"row_end = "<<" "<<row1<<" || "<<" cow_end = "<<col1<<endl;

                                count++;

//                                cout<<endl;
//                                cout <<"count = " <<count <<endl;
//                                cout <<endl;

                                check = (pluss+1)*(pluss+1);
                                if(check == count)
                                {
                                    if(run==0)
                                    {
                                        run = 1;
                                        check_size[0] = check;
                                        pluss = pluss+1 ;
//                                        cout << "Plus Is New !! = "<<pluss<<endl;
//                                        cout << "A New Loop "<<endl;
                                        Size = pluss*pluss ;
                                        find_row = k ;
                                        find_col = m ;

//                                        cout << "Find_Row = "<<find_row<<" || "<<"Find_col = "<<find_col<<endl;
//                                        cout << "This Size now = "<<Size<<endl;
//                                        cout<<"---------------------------------------"<<endl;
                                    }
                                    pluss = pluss+1 ;
//                                    cout << "Plus Is New !! = "<<pluss<<endl;
//                                    cout << "A New Loop "<<endl;

                                    if(check_size[0]<count)
                                    {
                                        check_size[0] = count ;
                                        find_row = k ;
                                        find_col = m ;
                                        Size = pluss*pluss ;
//                                        cout << "Find_Row = "<<find_row<<" || "<<"Find_col = "<<find_col<<endl;
//                                        cout << "This Size now = "<<Size<<endl;
                                    }
//                                    cout<<"---------------------------------------"<<endl;
                                }

                            }
                            else
                            {
//                                cout << "No Square !!!"<<endl;
                                count = 0;
                                c = 151 ;
                                d = 151 ;
                                pluss = num_box ;
                            }
                        }
                    }
                }
            }
        }
    }
    return find_row,find_col;
}

int main ()
{

    cin >> num_box ;

    int rr= 0 ;
    int cc = 0;
    for(int y = 0 ;y<150;y++)
    {
        for(int g = 0;g<150;g++)
        {
            land[y][g] = '0';
        }
    }
    for(int i = 0;i<num_box;i++)
    {
        for(int j = 0 ; j<num_box;j++)
        {
            cin >> land[i][j];
        }
    }
    find_island(0,0);
    cout << (find_row+1)<<" "<<(find_col+1)<<endl;
    cout <<Size;


}
