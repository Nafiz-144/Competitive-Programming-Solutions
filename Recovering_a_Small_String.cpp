#include <iostream>
#include <string>
using namespace std;

string findSmallestWord(int encoded_sum)
{
    string smallest_word = "";

    for (char c1 = 'a'; c1 <= 'z'; ++c1)
    {
        for (char c2 = 'a'; c2 <= 'z'; ++c2)
        {
            for (char c3 = 'a'; c3 <= 'z'; ++c3)
            {
                int sum = (c1 - 'a' + 1) + (c2 - 'a' + 1) + (c3 - 'a' + 1);
                if (sum == encoded_sum)
                {
                    smallest_word = string(1, c1) + string(1, c2) + string(1, c3);
                    return smallest_word;
                }
            }
        }
    }

    return smallest_word;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string smallest_word = findSmallestWord(n);
        cout << smallest_word << endl;
    }

    return 0;
}
