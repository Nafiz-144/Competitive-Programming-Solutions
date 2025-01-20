#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int a, b, d, e;
    cin >> a >> b >> d >> e;
    int max_f = 0;
    for (int i = -100; i < 100; i++)
    {
        int fc = 0;
        if (i == a + b)
        {
            fc++;
        }
        if (d == b + i)
        {
            fc++;
        }

        if (e == i + d)
        {
            fc++;
        }
        max_f = max(max_f, fc);
    }
    cout << max_f << endl;
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
