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
        for (int &z : a)
        {
            cin >> z;
        }
        vector<int> fre(n + 1);
        for (int z : a)
        {
            fre[z]++;
        }
        {
        }
        cout << n - (*max_element(fre.begin(), fre.end())) << endl;
    }
    return 0;
}