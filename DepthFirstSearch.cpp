void dfs(vector<vector<int>> &am, int start,vector<bool> &visited)
{
    cout << start << " ";
    visited[start] = true;
    for (int i = 0; i < am[start].size(); i++)
    {
        if (visited[i] == false && am[start][i] == 1)
        {
            dfs(am, i,visited);
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
    vector<bool>vis(nvert,false);
    dfs(adjmat, 0,vis);
}
