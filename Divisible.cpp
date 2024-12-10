#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int gcd = __gcd(n, k);
        cout << (k / gcd) << endl;
    }
    return 0;
}