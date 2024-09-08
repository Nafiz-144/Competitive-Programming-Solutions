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
        int id = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == s[i + 1])
            {
                id = i;
            }
        }

        if (id == -1)
        {
            if (s.back() == 'a')
            {
                cout << (s + "b") << endl;
            }
            else
            {
                cout << "a" << endl;
            }
        }
        else
        {
            string t = "a";
            if (s[id] == 'a')
            {
                t = "b";
                cout << s.substr(0, id + 1) + t + s.substr(id + 1) << endl;
            }
        }
    }

    return 0;
}
