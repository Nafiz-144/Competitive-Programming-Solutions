#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    { /*
 5
 0 1
 no
 0 3
 no
 2 0
 yes
 2 3
 yes
 3 1
 no
 */

        int a, b;
        cin >> a >> b;
        if (a == 0 && b % 2 != 0 || a % 2 != 0)
        {
            cout << "No" << endl;
        }
        else
        {

            cout << "Yes" << endl;
        }
    }
    return 0;
}