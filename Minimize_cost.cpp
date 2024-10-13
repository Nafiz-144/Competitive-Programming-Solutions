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
    int max = *max_element(a.begin(), a.end());

    int c = 0;
    for (int i = 0; i < n; i++)
    {

        if (a[i] <= max)
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}