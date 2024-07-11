#include <bits/stdc++.h>

signed main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    std::cin >> t;
    while (t--)
    {
        int n, L;
        std::cin >> n >> L;
        std::vector<std::pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            std::cin >> v[i].second >> v[i].first;
        }
        std::sort(v.begin(), v.end());

        int ans = 0;
        for (int l = 0; l < n; l++)
        {
            std::multiset<int> s;
            int cur = 0;
            for (int r = l; r < n; r++)
            {
                s.insert(v[r].second);
                cur += v[r].second;
                while (!s.empty() && v[r].first - v[l].first + cur > L)
                {
                    int max_value = *s.rbegin();
                    cur -= max_value;
                    s.extract(max_value);
                }
                ans = std::max(ans, (int)s.size());
            }
        }

        std::cout << ans << "\n";
    }

    return 0;
}