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
        vector<string> s(n);
        for (i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        if (i != i + 1)
        {
            cout << "Yes" << endl;
        }
        else if (i == i + 1 || i + 2 == i)
        {
            cout << "No" << endl;
        }
    }
    return 0;
}