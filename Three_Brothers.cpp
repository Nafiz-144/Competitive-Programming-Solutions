#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    if (a == 3 || b == 3)
    {
        cout << abs(a - b) << endl;
    }
    else
    {
        cout << a + b << endl;
    }

    return 0;
}