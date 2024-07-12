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
        while (a && b < 5)
        {
            a = a + 1;
            b = b + 1;
        }
        cout << a * b * c << endl;
        ;
    }
    return 0;
}