#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int x, count = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> x;
            if (x > a)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}