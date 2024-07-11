#include <iostream>
#include <vector>

using namespace std;

bool check = false;

void solve(int i, int n, vector<int> &p)
{
    if (i == n)
    {
        check = true;
        cout << "YES" << endl;
        cout << p.size() << endl;
        for (int val : p)
        {
            cout << val << " ";
        }
        cout << endl;
        return;
    }
    if (i < n)
    {
        p.push_back(2 * i);
        solve(2 * i, n, p);
        p.pop_back();

        p.push_back(10 * i + 1);
        solve(10 * i + 1, n, p);
        p.pop_back();
    }
}

int main()
{
    int i, n;
    cin >> i >> n;
    vector<int> p;
    p.push_back(i);
    solve(i, n, p);
    if (!check)
    {
        cout << "NO" << endl;
    }
    return 0;
}
