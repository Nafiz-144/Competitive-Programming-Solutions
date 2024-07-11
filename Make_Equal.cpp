#include <iostream>
#include <vector>
using namespace std;

bool solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int totalWater = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        totalWater += a[i];
    }

    if (totalWater % n != 0)
    {
        return false;
    }

    int targetWater = totalWater / n;
    for (int i = 1; i < n; ++i)
    {
        a[i] += a[i - 1] - targetWater;
        if (a[i] != targetWater)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        if (solve())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
