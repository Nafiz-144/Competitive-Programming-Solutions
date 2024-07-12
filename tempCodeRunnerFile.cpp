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
        do
        {
            a = a + 1;
            b = b + 1;
        } while (a && b < 5);
        cout << a * b * c << endl;
        ;
    }
    return 0;
}