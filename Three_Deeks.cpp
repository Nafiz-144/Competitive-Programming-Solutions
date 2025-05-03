#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int total = a + b + c;

        if (total % 3 != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        int x = total / 3;

        if (b <= x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
