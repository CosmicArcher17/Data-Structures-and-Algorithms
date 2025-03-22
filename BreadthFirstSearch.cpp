#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int nvert, nedge;

void bfs(vector<vector<int>> &am, int start)
{
    queue<int> q;
    vector<bool> visited(am.size(), false);
    q.push(start);
    while (!q.empty())
    {
        start = q.front();
        if(visited[start]==true){
            q.pop();
            start=q.front();
        }
        if (visited[start] == false)
        {
            
            cout << start << " ";
            visited[start] = true;
            q.pop();
            for (int i = 0; i < am.size(); i++)
            {
                if (visited[i] == false && am[start][i] == 1)
                {
                    q.push(i);
                }
            }
        }
    }
}
int main()
{

    cin >> nvert;
    cin >> nedge;

    int x, y;
    vector<vector<int>> adjmat(nvert, vector<int>(nvert));

    for (int i = 0; i < nvert; i++)
    {
        for (int j = 0; j < nvert; j++)
        {
            adjmat[i][j] = 0;
        }
    }
    for (int i = 0; i < nedge; i++)
    {
        cin >> x >> y;
        adjmat[x][y] = 1;
        adjmat[y][x] = 1;
    }
    bfs(adjmat, 0);
}
