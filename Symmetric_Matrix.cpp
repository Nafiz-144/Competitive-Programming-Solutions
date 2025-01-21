#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<vector<int>>> a(n, vector<vector<int>>(2, vector<int>(2)));
        bool ok = false;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i][0][0] >> a[i][0][1];
            cin >> a[i][1][0] >> a[i][1][1];
            if (a[i][0][1] == a[i][1][0])
            {
                ok = true;
            }
        }

        if (ok && m % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}