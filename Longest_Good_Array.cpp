#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int l, r;
        cin >> l >> r;
        const long long int df = r - l;
        long long int i = 0, ans = 0;
        while (i * (i - 1) / 2 <= df)
        {
            ans = i;
            i++;
        }
        cout << ans << endl;
    }
    return 0;
}