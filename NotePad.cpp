

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        bool flag = false;
        int n;
        cin >> n;
        map<string, int> mp; // Corrected map declaration
        string s;
        cin >> s;
        string a;
        for (int i = 1; i < n; i++)
        {
            a = "";
            a += s[i - 1];
            a += s[i];
            if (mp.find(a) != mp.end() && mp[a] < i - 1)
            {
                flag = true;
                break;
            }
            else if (mp.find(a) == mp.end())
            {
                mp[a] = i;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
