#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        long long int m = 1;
        while (m * m < n)
        {
            m++;
        }

        if (m * m != n)
        {
            cout << "No" << endl;
            continue;
        }

        vector<string> mat(m, string(m, '0'));
        for (int i = 0; i < m; i++)
        {
            mat[0][i] = '1';
            mat[m - 1][i] = '1';
            mat[i][0] = '1';
            mat[i][m - 1] = '1';
        }

        string t = "";
        for (const auto &z : mat)
        {
            t += z;
        }

        cout << (s == t ? "Yes" : "No") << endl;
    }

    return 0;
}
