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

    int missingProblems = 0;

    for (char ch = 'A'; ch <= 'G'; ++ch)
    {
        int countCh = count(a.begin(), a.end(), ch);
        if (countCh < m)
        {
            missingProblems += (m - countCh);
        }
    }

    cout << missingProblems << endl;
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
