#include <bits/stdc++.h>
using namespace std;

vector<int> graph[1000];
vector<bool> vstd;

void dfs(int x)
{
    cout << x << " ";
    vstd[x] = true;
    for (int i = 0; i < graph[x].size(); i++)
    {
        if (!vstd[i])
        {
            dfs(i);
        }
    }
}

int main()
{
    int node, edge, i, node1, node2, source;

    cout << "Nodes and Edges:\n";
    cin >> node >> edge;

    cout << "The graph:\n";
    for (i = 0; i < edge; i++)
    {
        cin >> node1 >> node2;
        graph[node1].push_back(node2);
        graph[node2].push_back(node1);
    }

    vstd.assign(node, false);

    cout << "Source node: ";
    cin >> source;

    cout << "dfs path is: ";
    dfs(source);

    return 0;
}