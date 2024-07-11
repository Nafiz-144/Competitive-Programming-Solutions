#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x_1, x_2, x_3;
        cin >> x_1 >> x_2 >> x_3;
        int min_dis = INT_MAX;
        for (int a = 1; a <= 10; a++)
        {
            int current_dis = abs(a - x_1) + abs(a - x_2) + abs(a - x_3);

            if (current_dis < min_dis)
            {
                min_dis = current_dis;
            }
        }
        cout << min_dis << endl;
    }

    return 0;
}