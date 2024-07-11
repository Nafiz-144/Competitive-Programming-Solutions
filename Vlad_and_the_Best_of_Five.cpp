#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        string s;
        cin >> s; // Read the string of length 5

        int countA = 0, countB = 0;
        for (char ch : s)
        {
            if (ch == 'A')
            {
                countA++;
            }
            else if (ch == 'B')
            {
                countB++;
            }
        }

        // Output the letter that appears most frequently
        if (countA > countB)
        {
            cout << "A\n";
        }
        else
        {
            cout << "B\n";
        }
    }

    return 0;
}
