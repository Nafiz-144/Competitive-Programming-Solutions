/* Includes */
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>

/* Using libraries */
using namespace std;

/* Defines */
template <class T>
using vc = vector<T>;
using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template <class T>
void output(T &a)
{
    for (auto i : a)
        cout << i << ' ';
    cout << '\n';
}

template <class T>
bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}

template <class T>
bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}

const int N = 2e5;
const int bit = 30;

struct segtree
{
    vc<int> t;
    int n;
    segtree(int n) : n(n)
    {
        t.resize(n * 2);
    }
    void upd(int i, int x)
    {
        for (t[i += n] = x; i > 1; i >>= 1)
        {
            t[i >> 1] = t[i] | t[i ^ 1];
        }
    }
    int get(int l, int r)
    {
        int res = 0;
        for (l += n, r += n; l < r; l >>= 1, r >>= 1)
        {
            if (l & 1)
                res |= t[l++];
            if (r & 1)
                res |= t[--r];
        }
        return res;
    }
};

int n;
int l[N], r[N];
int w[N];
void fix()
{
    for (int i = 0; i < n; ++i)
    {
        if (l[i] == r[i])
        {
            w[i] = l[i];
            l[i] = r[i] = 0;
            continue;
        }
        int pref = (1 << (__lg(l[i] ^ r[i]) + 1)) - 1;
        w[i] = r[i] - (r[i] & pref);
        r[i] &= pref;
        l[i] &= pref;
    }
}

void solve()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> l[i] >> r[i];
    }
    fix();
    segtree t(n);
    vc<vc<int>> bits(bit, vc<int>(n + 1));
    for (int i = 0; i < n; ++i)
    {
        t.upd(i, w[i]);
        for (int j = 0; j < bit; ++j)
        {
            bits[j][i + 1] = bits[j][i];
            if (r[i] >> j & 1)
            {
                bits[j][i + 1]++;
            }
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        --x;
        int ans = t.get(x, y);
        for (int j = bit - 1; j >= 0; --j)
        {
            int cnt = bits[j][y] - bits[j][x] + (ans >> j & 1);
            if (cnt > 1)
            {
                ans |= (2 << j) - 1;
                break;
            }
            else if (cnt == 1)
            {
                ans |= 1 << j;
            }
        }
        cout << ans << ' ';
    }
    cout << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}