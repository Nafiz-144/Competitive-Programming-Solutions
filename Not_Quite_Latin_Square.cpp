#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int ct[3] = {};
        for (auto i = 0; i < 9; ++i)
        {
            char c;
            cin >> c;
            if (c != '?')
            {
                ct[c - 'A']++;
            }
        }
        for (auto i = 0; i < 3; i++)
        {
            if (ct[i] < 3)
            {
                cout << (char)('A' + i) << endl;
            }
        }
    }
    return 0;
}