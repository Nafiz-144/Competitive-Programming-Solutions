#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> l(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> l[i].first >> l[i].second;
    }
    sort(l.begin(), l.end());
    for (int i = 1; i < n; i++)
    {

        if (l[i].second < l[i - 1].second)
        {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
    return 0;
}