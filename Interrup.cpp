#include <iostream>
#include <vector>
#include <string>
#include <sstream>

int main()
{
    int testcases;
    std::cin >> testcases;
    std::cin.ignore(); // To ignore the newline after the integer input

    for (int t = 0; t < testcases; t++)
    {
        int k;
        std::cin >> k;
        std::cin.ignore(); // To ignore the newline after the integer input

        std::string input;
        std::getline(std::cin, input);
        std::istringstream iss(input);
        std::vector<int> list;
        int num;

        while (iss >> num)
        {
            list.push_back(num);
        }

        std::vector<int> freq(k + 1, 0);
        for (int x : list)
        {
            freq[x]++;
        }

        std::pair<int, int> solution(-1, -1);
        for (int i = 1; i <= k; i++)
        {
            if (i * i == k - 2)
            {
                if (freq[i] > 1)
                {
                    solution = {i, i};
                }
            }
            else if ((k - 2) % i == 0)
            {
                if (freq[i] > 0 && freq[(k - 2) / i] > 0)
                {
                    solution = {i, (k - 2) / i};
                }
            }
        }
        std::cout << solution.first << " " << solution.second << std::endl;
    }

    return 0;
}
