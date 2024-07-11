#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    if (a[0] != 1)
    {
        cout << "No" << endl;
        return; // Exit the function if a[0] is not 1
    }

    int sum = 1; // Initialize sum correctly
    for (int i = 1; i < n; i++)
    {
        if (a[i] > sum)
        {
            cout << "No" << endl;
            return; // Exit the function if a[i] is greater than sum
        }
        sum += a[i];
    }

    cout << "Yes" << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
