#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, f, a, b;
        std::cin >> n >> f >> a >> b;
        std::vector<int> m(n + 1);
        m[0] = 0;
        for (int i = 1; i <= n; ++i)
        {
            std::cin >> m[i];
        }
        for (int i = 1; i <= n; ++i)
        {
            f -= std::min(a * (m[i] - m[i - 1]), b);
        }
        std::cout << (f > 0 ? "YES" : "NO") << std::endl;
    }
    return 0;
}
