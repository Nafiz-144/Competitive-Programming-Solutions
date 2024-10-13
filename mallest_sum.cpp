#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int small = 1;
    for (int i = 0; i < a.size(); i++)
    {
        int co = a[i];
        if (co > small)
        {
            break;
        }
        small += co;
    }
    cout << small << endl;

    return 0;
}