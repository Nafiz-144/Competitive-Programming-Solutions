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
        int gcd = 0;
        for (int i = 0; i < n || i < k; i++)
        {
            if (n % i == 0 && k & i)
            {
                gcd = i;
            }
        }
        cout << (k / gcd) << endl;
    }
    return 0;
}