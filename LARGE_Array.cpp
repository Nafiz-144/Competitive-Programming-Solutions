#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        // The minimum difference |i - (n-1)| can only be 0 or 1
        cout << min(abs(0 - (n - 1)), abs((n - 1) - (n - 1))) << endl;
    }

    return 0;
}
