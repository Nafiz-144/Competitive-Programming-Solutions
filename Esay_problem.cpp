/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << n - 1 << endl;
        }
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a;
        cin >> a;
        string b = "";

        for (int i = a.size() - 1; i >= 0; --i)
        {
            if

                (a[i] == 'p')
            {
                b += 'q';
            }
            else if

                (a[i] == 'q')
            {
                b += 'p';
            }
            else
            {
                b += 'w';
            }
        }

        cout << b << endl;
    }

    return 0;
}*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        long long seated_row1 = min(a, m);
        long long seated_row2 = min(b, m);

        long long free_row1 = m - seated_row1;
        long long free_row2 = m - seated_row2;

        long long seated_c_row1 = min(c, free_row1);
        long long seated_c_row2 = min(c - seated_c_row1, free_row2);

        long long total_seated = seated_row1 + seated_row2 + seated_c_row1 + seated_c_row2;

        cout << total_seated << endl;
    }

    return 0;
}
