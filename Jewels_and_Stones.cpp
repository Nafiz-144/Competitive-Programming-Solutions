#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string j, s;
        cin >> j >> s;
        int c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (j[i] == s[i])
            {
                c++;
            }
        }
        cout << c << endl;
    }

    return 0;
}