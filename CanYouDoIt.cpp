#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
    }

    else if (n == 0)
    {
        for (int i = 0; i < 2; i++)
        {
            cout << i << " ";
        }
    }
    else if (n < 0)
    {
        for (int i = n; i < 2; i++)
        {
            cout << i << " ";
        }
    }
}