#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; // Number of elements in the series

    int countodd = 0, counteven = 0;
    int lastodd = -1, lasteven = -1;

    for (int i = 1; i <= n; ++i)
    {
        int num;
        cin >> num;

        if (num % 2 == 0)
        {
            counteven++;
            lasteven = i;
        }
        else
        {
            countodd++;
            lastodd = i;
        }
    }

    if (countodd == 1)
    {
        cout << lastodd << endl;
    }
    else
    {
        cout << lasteven << endl;
    }

    return 0;
}
