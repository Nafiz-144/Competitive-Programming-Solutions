#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

typedef long long ll;

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define fs(i, n) for (int i = 0; i < n; i++)
#define fb(i, n) for (int i = n - 1; i >= 0; i--)

void solve()
{

    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n), b(m);
    fs(i, n) cin >> a[i];
    fs(i, m) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // Use vectors instead of sets to store the books
    vector<ll> sa, sb, comm;
    fs(i, n)
    {
        if (a[i] <= k)
        {
            sa.push_back(a[i]); // Insert the elements of a into sa
        }
    }
    fs(i, m)
    {
        if (b[i] <= k)
        {
            sb.push_back(b[i]);
        }
    }

    // Use two pointers to find the common books
    int i = 0, j = 0;
    while (i < sa.size() && j < sb.size())
    {
        if (sa[i] == sb[j]) // If the books are equal, add them to comm and move both pointers
        {
            comm.push_back(sa[i]);
            i++;
            j++;
        }
        else if (sa[i] < sb[j]) // If sa[i] is smaller, move i
        {
            i++;
        }
        else // If sb[j] is smaller, move j
        {
            j++;
        }
    }

    // Remove the common books from sa and sb
    for (auto x : comm)
    {
        sa.erase(remove(sa.begin(), sa.end(), x), sa.end());
        sb.erase(remove(sb.begin(), sb.end(), x), sb.end());
    }

    ll sz = sa.size() + sb.size() + comm.size();
    if (sz < k)
    {
        no return;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
