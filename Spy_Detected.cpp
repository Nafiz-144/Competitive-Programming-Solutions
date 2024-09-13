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
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int index = -1;

        // If the first element is the outlier
        if (a[0] != a[1] && a[0] != a[2])
            index = 1; // output 1-based index

        // If the second element is the outlier
        else if (a[1] != a[0] && a[1] != a[2])
            index = 2; // output 1-based index

        // General case to find the different element
        else
        {
            for (int i = 2; i < n; i++)
            {
                if (a[i] != a[i - 1])
                {
                    index = i + 1; // +1 to follow 1-based indexing
                    break;
                }
            }
        }

        cout << index << endl;
    }

    return 0;
}
