#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int position = 0;
        int move = 1;

        for (int i = 1;; ++i)
        {
            if (i % 2 == 1)
            {

                position -= move;
            }
            else
            {

                position += move;
            }

            if (abs(position) > n)
            {
                if (i % 2 == 1)
                {
                    cout << "Sakurako" << endl;
                }
                else
                {
                    cout << "Kosuke" << endl;
                }
                break;
            }

            move += 2;
        }
    }
    return 0;
}
