#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void constructTree(int n, vector<vector<int>> &s)
{
    // Initialize an empty graph (adjacency list)
    vector<vector<int>> graph(n);

    // Add edges based on the matrix s
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i != j && s[i][j] == 1)
            {
                graph[j].push_back(i); // Edge from j to i
            }
        }
    }

    // Check if the graph is a valid tree
    vector<bool> visited(n, false);
    vector<int> stack;
    stack.push_back(0); // Start with the root vertex
    visited[0] = true;

    while (!stack.empty())
    {
        int u = stack.back();
        stack.pop_back();
        for (int v : graph[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                stack.push_back(v);
            }
        }
    }

    if (all_of(visited.begin(), visited.end(), [&](bool v)
               { return v; }))
    {
        cout << "YES" << endl;
        for (int i = 1; i < n; ++i)
        {
            cout << i + 1 << " " << graph[i][0] + 1 << endl; // Print edges (1-indexed)
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> s(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> s[i][j];
        }
    }
    constructTree(n, s);
    return 0;
}
