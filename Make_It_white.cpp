#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define fs(i, n) for (int i = 0; i < n; i++)
#define fb(i, n) for (int i = n - 1; i >= 0; i--)

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int a = -1, b = -1; // Initialize a and b to -1 to handle cases without 'B'

    fs(i, n)
    {
        if (s[i] == 'B')
        {
            a = i;
            break; // Stop the loop after finding the first 'B'
        }
    }

    fb(i, n)
    {
        if (s[i] == 'B')
        {
            b = i;
            break; // Stop the loop after finding the last 'B'
        }
    }

    if (a != -1 && b != -1)
    { // Check if 'B' was found
        cout << b - a + 1 << endl;
    }
    else
    {
        cout << 0 << endl; // Handle cases without 'B'
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
