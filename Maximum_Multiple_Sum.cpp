#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int best_x = 2;
        long long max_sum = 0;

        for (int x = 2; x <= n; ++x)
        {
            int m = n / x;
            long long sum = x * m * (m + 1) / 2;
            if (sum > max_sum)
            {
                max_sum = sum;
                best_x = x;
            }
        }

        cout << best_x << endl;
    }

    return 0;
}
