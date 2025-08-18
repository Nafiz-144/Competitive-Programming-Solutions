#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve()
{
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> B[i];
    }
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        if (A[i] > B[i])
        {
            sum += A[i] - B[i];
        }
    }
    return sum + 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << '\n';
    }
    return 0;
}