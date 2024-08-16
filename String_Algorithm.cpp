#include <bits/stdc++.h>
using namespace std;

string removeEvenPositions(string s)
{
    string result = "";
    for (int i = 0; i < s.size(); i = i + 2)
    {
        result += s[i];
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        while (s.size() > 1)
        {
            s = removeEvenPositions(s);
        }
        cout << s << endl;
    }
    return 0;
}
