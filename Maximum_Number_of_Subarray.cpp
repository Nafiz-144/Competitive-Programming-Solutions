#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // 1 2 3 4
    vector<int> sum(n);
    for (int i = 0; i < n; i++)
    {
        sum[i] = a[i] + a[i + 1];
    }

    return 0;
}