#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int T;
    cin >> T;

    double pi = 2 * acos(0.0); // Calculating π

    for (int i = 1; i <= T; ++i)
    {
        double r;
        cin >> r;

        double squareArea = 4 * r * r;
        double circleArea = pi * r * r;
        double shadedArea = squareArea - circleArea;

        // Print the result with the case number
        cout << "Case " << i << ": " << fixed << setprecision(2) << shadedArea << endl;
    }

    return 0;
}
