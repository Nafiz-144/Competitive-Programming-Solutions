#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int mini = min(x, y);
        int ma_v = max(x, y);

        cout << mini << " " << ma_v << endl;
    }
    return 0;
}