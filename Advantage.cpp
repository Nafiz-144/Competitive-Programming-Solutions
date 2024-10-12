#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        sort(s.begin(), s.end());

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = (s[i + 1] - s[n] && s[n] - n - 2 && s[i] - s[n] && s[n - 1] - s[n]);
            cout << a[i] << endl;
        }
    }
    return 0;
}