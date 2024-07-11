/*#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(n) cout << (n) << endl;
const ll INF = 2e18 + 99;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int count = 0;
        for (int  i = 1; i <= n; i++)
        {
            long long b = i;
            long long a = n - i;
            if (a > b)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << (n - 1) / 2 << endl;
    }

    return 0;
}
