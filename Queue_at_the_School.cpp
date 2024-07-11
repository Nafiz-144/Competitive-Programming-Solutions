#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, t, i;
    cin >> n >> t;
    string s;
    cin >> s;
    while (t)
    {
        for (i = 1; i < n; i++)
        {

            if (s[i - 1] == 'B' && s[i] == 'G')
            {

                s[i - 1] = 'G';
                s[i] = 'B';

                i++;
            }
        }
        t--;
    }
    cout << s << endl;
    return 0;
}