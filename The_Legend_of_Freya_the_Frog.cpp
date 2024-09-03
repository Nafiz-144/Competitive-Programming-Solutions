#include <iostream>
#include <cmath>
using namespace std;

void solve()
{
    long long x, y;
    cin >> x >> y;

    long long currentX = 0, currentY = 0;
    long long moves = 0;
    bool moveX = true; // Start by moving along the x-axis

    while (currentX < x || currentY < y)
    {
        moves++;
        if (moveX)
        {
            // Calculate how much we need to move along the x-axis
            long long k = x - currentX;
            currentX += k;
        }
        else
        {
            // Calculate how much we need to move along the y-axis
            long long k = y - currentY;
            currentY += k;
        }
        moveX = !moveX; // Alternate direction
    }

    cout << moves << endl;
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
