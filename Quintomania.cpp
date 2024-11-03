#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int c = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int diff = abs(vec[i] - vec[i + 1]);
        if (diff != 5 && diff != 7)
        {
            c++;
        }
    }
    if (c > 0)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
