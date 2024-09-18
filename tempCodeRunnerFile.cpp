#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int type;

        cin >> type;

        map<string, int> m;

        if (type == 1)
        {
            string x;
            int y;
            cin >> x >> y;
            m[x] += y;
        }
        else if (type == 2)
        {
            string x;
            cin >> x;
            m.erase(x);
        }
        else if (type == 3)
        {
            string x;
            cin >> x;
            cout << m[x] << endl;
        }
    }

    return 0;
}