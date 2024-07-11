#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve()
{
    int h, w, xA, yA, xB, yB;
    cin >> h >> w >> xA >> yA >> xB >> yB;

    string winner;
    bool win;

    if ((xA - xB) % 2 == 0)
    {
        winner = "Bob";
        if (xA >= xB)
        {
            win = false;
        }
        else if (yA == yB)
        {
            win = true;
        }
        else
        {
            int n_turns = max(0, min(w - yB, yB - 1)); // Ensure n_turns is non-negative
            win = xB - 2 * n_turns >= xA;
        }
    }
    else
    {
        winner = "Alice";
        xA++;
        yA += (yB - yA > 0) - (yB - yA < 0); // Condensed version of ternary conditional

        if (xA > xB)
        {
            win = false;
        }
        else if (yA == yB)
        {
            win = true;
        }
        else
        {
            int n_turns = max(0, min(yA - 1, w - yA)); // Ensure n_turns is non-negative
            win = xB - 2 * n_turns >= xA;
        }
    }

    cout << (win ? winner : "Draw") << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int _ = 0; _ < t; _++)
    {
        solve();
    }

    return 0;
}
