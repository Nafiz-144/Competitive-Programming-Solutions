#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a(2);
        for (int i = 0; i < a.size(); ++i)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        cout << a[0] << " " << a[1] << endl;
    }

    return 0;
}