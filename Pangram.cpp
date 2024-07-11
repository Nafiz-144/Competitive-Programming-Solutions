#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    char a[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (int i = 0; i < 26; i++)
    {
        int check = 0;
        for (int j = 0; j < s.size(); ++j)
        {
            if (a[i] == s[j])
            {
                check = 1;
                break;
            }
        }
        if (check == 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "Yes";

    return 0;
}