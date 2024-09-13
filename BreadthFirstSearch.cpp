#include <iostream>
#include <stdlib.h>
#include <queue>
#include <vector>
using namespace std;

int nvert, nedge;

struct Node
{
    int data;
    struct Node *link;
} *temp;
Node *head = NULL;

void createnode(Node *node, int value)
{
    if (node == NULL)
    {
        node = (struct Node *)malloc(sizeof(struct Node));
        node->data = value;
        node->link = NULL;
        head = node;
        return;
    }
    else if (node->link == NULL)
    {
        struct Node *p = (struct Node *)malloc(sizeof(struct Node));
        p->data = value;
        p->link = NULL;
        node->link = p;
        return;
    }
    else if (node->link != NULL)
    {
        node = node->link;
        createnode(node, value);
    }
}
void disp(struct Node *head)
{
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
}

void insertb(int val)
{
    Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = val;
    newnode->link = head;
    head = newnode;
}

void inserte(int val)
{
    temp = head;
    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    createnode(temp, val);
}

void delnode(int val)
{
    temp = head;
    if (temp->data == val)
    {
        temp = temp->link;
        head = temp;
    }
    else
    {
        while (temp->link->data != val)
        {
            temp = temp->link;
        }
        temp->link = temp->link->link;
    }
}
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
