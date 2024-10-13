#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    int c = 0;
    while (!a.empty())
    {
        cout << a[c] << " ";

        a.erase(a.begin() + c);
        c = (c + 1) % a.size();
    }
    cout << endl;
    return 0;
}