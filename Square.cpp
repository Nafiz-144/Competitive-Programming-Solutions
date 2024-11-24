#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        std::vector<std::vector<int>> a(4, std::vector<int>(2));
        for (int i = 0; i < 4; ++i)
        {
            std::cin >> a[i][0] >> a[i][1];
        }
        std::vector<int> x;
        for (const auto &p : a)
        {
            x.push_back(p[0]);
        }
        int dx = *std::max_element(x.begin(), x.end()) - *std::min_element(x.begin(), x.end());
        std::cout << dx * dx << std::endl;
    }
    return 0;
}
