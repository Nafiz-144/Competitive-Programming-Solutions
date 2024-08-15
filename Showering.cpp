#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n, s, m;
    cin >> n >> s >> m;

    // Vector to store intervals, initially with the day bounds [0, 0] and [m, m]
    vector<pair<int, int>> segs;
    segs.push_back({0, 0});
    segs.push_back({m, m});

    // Reading intervals and adding to segs
    for (int i = 0; i < n; ++i)
    {
        int l, r;
        cin >> l >> r;
        segs.push_back({l, r});
    }

    // Sorting intervals based on start times
    sort(segs.begin(), segs.end());

    // Check for sufficient gap between consecutive intervals
    for (int i = 1; i < segs.size(); ++i)
    {
        if (segs[i].first - segs[i - 1].second >= s)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;

    // Run solve() for each test case
    for (int i = 0; i < t; ++i)
    {
        solve();
    }

    return 0;
}
