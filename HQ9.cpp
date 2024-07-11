#include <bits/stdc++.h>
using namespace std;

int main()
{
    string p;
    cin >> p;
    int l = p.length();
    for (int i = 0; i < l; i++)
    {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
