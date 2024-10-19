#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> x;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (x.find(a[i]) != x.end())
        {
            cout << "No" << endl;
            return;
        }
        x.insert(a[i]);
    }
    cout << "Yes" << endl;

    return 0;
}