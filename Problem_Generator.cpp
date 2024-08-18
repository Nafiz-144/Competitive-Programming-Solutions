#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string a;
    cin >> a;

    int ans = 0;

    // Check for each difficulty level 'A' to 'G'
    for (char ch = 'A'; ch <= 'G'; ++ch)
    {
        // Count the occurrences of 'ch' in string 'a'
        int count = count(a.begin(), a.end(), ch);
        // If the count is less than m, add the deficit to 'ans'
        ans += max(0, m - count);
    }

    // Output the result
    cout << ans << endl;
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
