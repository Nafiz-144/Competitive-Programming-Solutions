#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int r = 0, g = 0;
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            if (c == 0 && g > 0)
            {
                r++;
                g--;
            }
            else if (c >= k)
            {
                g += c;
            }
        }
        cout << r << endl;
    }
    return 0;
}