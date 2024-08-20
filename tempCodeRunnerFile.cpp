#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after reading `t`

    while (t--)
    {
        string expression;
        getline(cin, expression); // Read the entire expression as a string

        stringstream ss(expression); // Use one stringstream object

        int num1, num2;
        char op;

        ss >> num1 >> op >> num2; // Parse the numbers and the operator

        if (op == '+')
        {
            int r = num1 + num2;
            cout << r << endl;
        }
    }

    return 0;
}
