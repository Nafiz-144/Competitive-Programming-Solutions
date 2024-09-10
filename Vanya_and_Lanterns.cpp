#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    vector<int> a(n);

    // Input lantern positions
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    // Sort the positions of the lanterns
    sort(a.begin(), a.end());

    // Calculate the maximum gap between adjacent lanterns
    double max_gap = 0.0;
    for (int i = 1; i < n; ++i)
    {
        max_gap = max(max_gap, double(a[i] - a[i - 1]));
    }

    // Check the distance from the first lantern to the beginning of the street
    double start_gap = a[0] - 0;

    // Check the distance from the last lantern to the end of the street
    double end_gap = l - a[n - 1];

    // The minimum radius `d` must cover the maximum half of the largest gap or the start/end gaps
    double min_radius = max({max_gap / 2, start_gap, end_gap});

    // Print the result with precision
    cout << fixed << setprecision(9) << min_radius << endl;

    return 0;
}
