#include <bits/stdc++.h>
using namespace std;
bool st(int a, int b)
{

    return a > b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f, k, i;
        cin >> n >> f >> k;
        vector<int> a(n);

        for (i = 1; i <= n; i++)
        {

            cin >> a[i];
        }
        sort(a.begin(), a.end(), st);
        for (i = 1; i <= n; i++)
        {

            if (a[i] == f && a[i] == k)
            {
                cout << "Yes" << endl;
            }
            else if (a[i] == f && a[i] != k)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Maybe" << endl;
            }
        }
    }

    return 0;
}