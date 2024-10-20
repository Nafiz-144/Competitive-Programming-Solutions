#include <iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;

    if (a >= '0' && a <= '9')
    {
        cout << "IS DIGIT";
    }
    else
    {
        if (a >= 'A' && a <= 'Z')
        {
            cout << "ALPHA" << endl;
            cout << "IS CAPITAL";
        }
        else
        {
            cout << "ALPHA" << endl;
            cout << "IS SMALL";
        }
    }

    return 0;
}
