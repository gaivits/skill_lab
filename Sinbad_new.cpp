#include<iostream>
#include<queue>
#include<cstring>
#include<stdio.h>
using namespace std;

#define M 100
#define N 100

int row[] = { -1, -1, -1, 0, 1, 0, 1, 1 };
int col[] = { -1, 1, 0, -1, -1, 1, 0, 1 };

bool finded(int mapp[M][N], int x, int y, bool check[M][N])
{
    return (x >= 0) && (x < M) && (y >= 0) && (y < N) &&
        (mapp[x][y] && !check[x][y]);
}

void Find_BFS(int mapp[M][N], bool check[M][N], int i, int j)
{
    queue< pair<int, int> > kill;
    kill.push(make_pair(i, j));
    check[i][j] = true;

    while (!kill.empty())
    {
        int x = kill.front().first;
        int y = kill.front().second;
        kill.pop();

        for (int i = 0; i < 8; i++)
        {
            if (finded(mapp, x + row[i], y + col[i], check))
            {
                check[x + row[i]][y + col[i]] = 1;
                kill.push(make_pair(x + row[i], y + col[i]));
            }
        }
    }
}

int main()
{
    int x = 0;
    int y = 0;
    cin >> x >> y;
    int mapp[M][N];

    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y ;j++)
        {
            cin >> mapp[i][j];
        }
    }

    bool check[M][N];
    memset(check, 0, sizeof(check));
    int answer = 0;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (mapp[i][j] && check[i][j] == 0)
            {
                Find_BFS(mapp, check, i, j);
                answer++;
            }
        }
    }
    cout<< answer <<endl;
}
