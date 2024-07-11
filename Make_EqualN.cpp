#include <iostream>
#include <vector>
#include <algorithm>

void solve()
{
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }
    int i1 = 0;
    int i2 = 0;
    while (i1 < n && a[i1] == a[0])
    {
        i1 += 1;
    }
    while (i2 < n && a[n - i2 - 1] == a[n - 1])
    {
        i2 += 1;
    }
    int res = n;
    if (a[0] == a[n - 1])
    {
        res -= i1;
        res -= i2;
    }
    else
    {
        res -= std::max(i1, i2);
    }
    std::cout << std::max(0, res) << std::endl;
}

int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; ++i)
    {
        solve();
    }
    return 0;
}
