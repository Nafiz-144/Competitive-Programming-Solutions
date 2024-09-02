#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string k = "Timur";
        sort(k.begin(), k.end());
        int n, i = 0;
        cin >> n;
        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        sort(s[i].begin(), s[i].end());

        bool found = false;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == k)
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}