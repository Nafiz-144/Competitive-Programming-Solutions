#include <bits/stdc++.h> // not working
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int _ = 0; _ < t; ++_)
    {
        int n;
        cin >> n;

        vector<int> start(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> start[i];
        }

        vector<int> finish(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> finish[i];
        }

        int add_amnt = 0, rmv_amnt = 0;
        for (int i = 0; i < n; ++i)
        {
            if (start[i] < finish[i])
            {
                add_amnt++;
            }
            else if (start[i] > finish[i])
            {
                rmv_amnt++;
            }
        }

        cout << max(add_amnt, rmv_amnt) << endl;
    }

    return 0;
}
