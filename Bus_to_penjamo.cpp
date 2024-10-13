#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, r;
        cin >> n >> r;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<int>());

        int happyPeople = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 2)
            {
                happyPeople += 2;
                a[i] -= 2;
            }
            if (a[i] > 0 && r > 0)
            {
                happyPeople++;
                r--;
            }
        }

        cout << happyPeople << endl;
    }

    return 0;
}