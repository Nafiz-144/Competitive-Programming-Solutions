#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        int s[n][n];
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> s[i][j];
            }
        }

        for (i = 0; i < n; i = i + 2)
        {
            for (j = 0; j < n; j = j + 2)
                if (s[i][j] % 2 == 0)
                {
                    cout << "Yes" << endl;
                }
                else
                {
                    cout << "No" << endl;
                }
        }
    }

    return 0;
}