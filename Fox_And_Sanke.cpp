#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i, j;
    cin >> n >> m;

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i % 4 == 0)
            {
                if (j == m - 1)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
            else if (i % 4 == 2)
            {
                if (j == 0)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
            else
            {
                cout << "#";
            }
        }
        cout << endl;
    }

    return 0;
}