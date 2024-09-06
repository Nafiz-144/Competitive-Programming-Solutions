#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T; // number of test cases

    while (T--)
    {
        int n, m;
        cin >> n >> m; // n and m values

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        int v = *max_element(arr.begin(), arr.end()); // find the maximum element

        for (int j = 0; j < m; ++j)
        {
            char c;
            int l, r;
            cin >> c >> l >> r; // read operation and range

            if (l <= v && v <= r)
            { // if v is within the range
                if (c == '+')
                {
                    v += 1; // increment if '+'
                }
                else
                {
                    v -= 1; // decrement if '-'
                }
            }
            cout << v;
            if (j != m - 1)
            {
                cout << " ";
            }
            else
            {
                cout << endl;
            }
        }
    }

    return 0;
}
