#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}