#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;

        std::vector<int> freq(26, 0);
        for (char c : s)
        {
            if (c >= 'A' && c <= 'Z')
            {
                freq[c - 'A']++;
            }
        }

        int count = 0;
        for (int i = 0; i < 26; ++i)
        {
            if (freq[i] >= i + 1)
            {
                count++;
            }
        }
        std::cout << count << std::endl;
    }
    return 0;
}
