#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> s(4);
        for (int i = 0; i < s.size(); ++i)
        {
            cin >> s[i];
        }
        if (min(s[0], s[1]) > max(s[2], s[3]) || max(s[0], s[1]) < min(s[2], s[3]))
        {
            cout << "NO\n";
        }

        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}