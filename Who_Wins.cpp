#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int c = 0, d = 0;
    while (t--)
    {
        int x1, x2;
        cin >> x1 >> x2;
        if (x1 > x2)
        {
            c++;
        }
        else if (x1 < x2)
        {
            d++;
        }
    }
    if (c < d)
    {
        cout << "Pathan" << endl;
    }
    else if (c > d)
    {
        cout << "Tiger" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }
    return 0;
}