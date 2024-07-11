#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int good_prefixes = 0;
        long long prefix_sum = 0;

        for (int i = 0; i < n; ++i)
        {
            prefix_sum += a[i];

            long long current_prefix_sum = prefix_sum;
            for (int j = 0; j <= i; ++j)
            {
                if (a[j] == current_prefix_sum - a[j])
                {
                    good_prefixes++;
                    break;
                }
            }
        }

        cout << good_prefixes << endl;
    }

    return 0;
}