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
    bool q;
    for (int i = 0; i < n; i++)
    {
        if (abs(vec[i] - vec[i + 1]) != 5 || abs(vec[i] - vec[i + 1]) != 7)
        {
            q = true;
        }
    }
    if (q == true)
    {
        cout << "No\n";
    }
    else
    {
        cout << "Yes\n";
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