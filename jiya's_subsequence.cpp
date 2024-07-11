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
        long long p = 1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            p = p * x;
        }
        int d = p % 10;
        if (d == 2 || d == 3 || d == 5)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}