#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a(1000);
    int n = 0;
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != a[i + 1])
        {
            n = a[n]++;
        }
    }
    cout << n << endl;

    return 0;
}