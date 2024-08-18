#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a != c && b != c)
        {

            cout << c << endl;
        }
        else if (a != b && c != b)
        {
            cout << b << endl;
        }
        else if (b != a && c != a)
        {
            cout << a << endl;
        }
    }
    return 0;
}