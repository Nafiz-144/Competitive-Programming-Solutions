#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a)
{
    int n = a.size();
    vector<int> pos(n), neg(n);

    // Calculate the maximum prefix sum for positive and negative elements
    pos[0] = max(0, a[0]);
    neg[0] = max(0, -a[0]);
    for (int i = 1; i < n; ++i)
    {
        pos[i] = max(pos[i - 1], pos[i - 1] + a[i]);
        neg[i] = max(neg[i - 1] + a[i], -a[i]);
    }

    // Calculate the maximum sum after flipping signs at each position
    int maxSum = *max_element(a.begin(), a.end());
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += a[i];
        maxSum = max(maxSum, max(sum - neg[i], sum + pos[i]));
        sum = max(sum, 0);
    }

    return maxSum;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        cout << solve(a) << endl;
    }
    return 0;
}
