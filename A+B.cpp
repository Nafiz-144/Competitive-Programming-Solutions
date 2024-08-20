#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        string input;
        getline(cin, input);

        istringstream iss(input);
        int result;
        if (iss >> result)
        {
            cout << result << endl;
        }
    }

    return 0;
}