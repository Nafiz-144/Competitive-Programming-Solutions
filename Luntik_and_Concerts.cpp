#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long a, b, c, n;
        cin >> a >> b >> c;

        n = a + 2 * b + 3 * c;

        cout << n % 2 << endl;
    }

    return 0;
}