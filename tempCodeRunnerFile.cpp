#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string a[100];
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> a[i];
        int l = a[i].size();
        if (l % 2 == 0)
        {
            if (l / 2 + 1 == l / 2 + 2)
            {
                cout << "Yes" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}