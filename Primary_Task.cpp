#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        int i = 0;

        for (i = 0; i < s.size(); ++i)
        {
            cin >> s[i];
        }
        cout << s.size() << s[i] << endl;
        if (s[0] && s[1] != 10)
        {
            cout << "No" << endl;
        }
        else if (s[2] && s[s.size() - 1] == 0)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}