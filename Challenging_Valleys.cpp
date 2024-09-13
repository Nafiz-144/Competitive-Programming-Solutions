#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, i = 0;
        cin >> n;
        vector<int> a(n);
        for (i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        bool t = false;
        sort(a.begin(), a.end());
        for (i = 0; i < n; ++i)
        {
            if (a[i] - a[i + 1] != 0 && a[i + 1] - a[i + 2] != 0)
            {
                t = true;
            }
            else
            {

                t = false;
            }
        }
        if (t == true)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}