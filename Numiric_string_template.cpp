#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i)
    {
        unordered_map<char, int> m_1;
        unordered_map<int, char> m_2;
        string s;
        cin >> s;
        if (s.length() != n)
        {
            cout << "NO" << endl;
            continue;
        }

        bool ok = true;
        for (int j = 0; j < n; ++j)
        {
            if (m_1.find(s[j]) == m_1.end() && m_2.find(a[j]) == m_2.end())
            {
                m_1[s[j]] = a[j];
                m_2[a[j]] = s[j];
            }
            else if ((m_1.find(s[j]) != m_1.end() && m_1[s[j]] != a[j]) ||
                     (m_2.find(a[j]) != m_2.end() && m_2[a[j]] != s[j]))
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        solve();
    }
    return 0;
}
