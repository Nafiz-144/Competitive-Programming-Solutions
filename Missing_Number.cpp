#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int s, a, b, c;
        cin >> s >> a >> b >> c;
        cout << s - (a + b + c) << endl;
    }

    return 0;
}