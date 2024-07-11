#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string balanceParentheses(string s)
{
    vector<pair<int, int, char>> a;
    int b = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        a.push_back({b, -i, s[i]});
        b += (s[i] == '(') ? 1 : -1;
    }
    sort(a.begin(), a.end());
    return accumulate(a.begin(), a.end(), string(""), [](const string &acc, const pair<int, int, char> &p)
                      { return acc + p.second; });
}

int main()
{
    string s;
    cout << "Enter a string with parentheses: ";
    cin >> s;
    cout << "Balanced string: " << balanceParentheses(s) << endl;
    return 0;
}
