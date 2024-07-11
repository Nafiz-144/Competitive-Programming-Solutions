#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int n;
    cin >> n;
    vector<string> g;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        g.push_back(s);
    }
    bool Triangle = false;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (g[i][j] == '1')
            {
                count++;
            }
        }
        if (count == 1)
        {
            Triangle = true;
        }
        else if (count > 1)
        {
            break;
        }
    }
    reverse(g.begin(), g.end());
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (g[i][j] == '1')
            {
                cnt++;
            }
        }
        if (cnt == 1)
        {
            Triangle = true;
        }
        else if (cnt > 1)
        {
            break;
        }
    }
    if (Triangle)
    {
        cout << "TRIANGLE" << endl;
    }
    else
    {
        cout << "SQUARE" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}