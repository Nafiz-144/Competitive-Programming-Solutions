#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;

    for (int i = 0; i < n; i++)
    {

        if (a[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }

        if (a[i] > 0)
        {
            positiveCount++;
        }
        else if (a[i] < 0)
        {
            negativeCount++;
        }
    }

    cout << "Even: " << evenCount << endl;
    cout << "Odd: " << oddCount << endl;
    cout << "Positive: " << positiveCount << endl;
    cout << "Negative: " << negativeCount << endl;

    return 0;
}
