#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    if (s[0] != 'y' && s[0] != 'Y')
    {
        cout << "No" << endl;
    }
    else if (s[1] != 'e' && s[1] != 'E')
    {
        cout << "No" << endl;
    }
    else if (s[2] != 's' && s[2] != 'S')
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
}
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        solve();
    }

    return 0;
}