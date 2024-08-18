#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> x(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> x[i];
        }

        if (n > 2 || x[0] + 1 == x[n - 1])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
