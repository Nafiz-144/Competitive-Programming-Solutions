#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n;
        int c = 0;
        int min = 10;
        k = n;
        while (k > 0)
        {

            c++;
            if (k % 10 < min)
            {

                min = k % 10;
            }
            k /= 10;
        }

        if (c == 2)
        {
            cout << (n % 10) << endl;
        }
        else
        {
            cout << min << endl;
        }
        /* code */
    }

    return 0;
}