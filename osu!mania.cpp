#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> result(n);
    for (int i = n - 1; i >= 0; i--)
    {
        string row;
        cin >> row;
        for (int j = 0; j < row.size(); j++)
        {
            if (row[j] == '#')
            {
                result[i] = j + 1;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
