#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int c = 0;
        while (n > 0)
        {
            int s = 0, g = 0;
            if (n >= 5)
            {
                s = n - 5;
                cout << s << endl;
            }
            else if (s >= 3)
            {
                g = s - 3;
            }
            else if (g == 1)
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}