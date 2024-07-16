#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int tt = 0; tt < t; tt++)
    {
        string s;
        cin >> s;
        bool ok = true;

        if (s.length() % 2 == 0)
        {
            int half_length = s.length() / 2;
            for (int i = 0; i < half_length; i++)
            {
                if (s[i] != s[i + half_length])
                {
                    ok = false;
                    break;
                }
            }
        }
        else
        {
            ok = false;
        }

        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
