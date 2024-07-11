#include <iostream>
#include <string>

using namespace std;

bool isSubstring(const string &s, const string &t)
{
    return t.find(s) != string::npos;
}

int main()
{
    string S;
    cin >> S;

  
    string pattern = "oxx";
    string T = "";
    while (T.length() < S.length() + 6)
    {
        T += pattern;
    }

    if (isSubstring(S, T))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
