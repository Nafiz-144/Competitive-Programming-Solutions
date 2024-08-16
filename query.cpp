#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i)
    {
        int x;
        cin >> x;

        int min_index = min_element(a.begin(), a.end()) - a.begin();

        cout << min_index + 1 << endl;

        a[min_index] = x;
    }

    return 0;
}
