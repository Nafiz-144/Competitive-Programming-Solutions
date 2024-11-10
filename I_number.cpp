/* In the Name of ALLAH, the most gracious, the most merciful  */
#include <bits/stdc++.h>
using namespace std;
#define nl endl
#define ll long long
#define cy cout << "YES" << nl
#define cn cout << "NO" << nl
#define all(v) (v).begin(), (v).end()
#define sii(v) int((v).size())
#define pb push_back
const int inf = 1e9;
const ll INF = 1e18;
const int mod = 998244353;
const int N = 2e5 + 5;
/* Formula X:
 * Sum of 'i to j' = ((j-i+1)*(i+j))/2;
 * LCM = (a*b)/__gcd(a,b);
 *
 *  --*/

void solve()
{
    string s, ss;
    cin >> s >> ss;

    ll si = 0, ssi = 0, sb = 0, ssb = 0, cnt = 0;
    for (ll i = 0; i < sii(s); i++)
    {
        if (s[i] == '#' && ss[i] == '#')
            cnt++;
        if (s[i] == '#' && sb == 0)
            si = i;
        if (s[i] == '#')
        {
            sb++;
        }
    }
    for (ll i = 0; i < sii(ss); i++)
    {
        if (ss[i] == '#' && ssb == 0)
            ssi = i;
        if (ss[i] == '#')
        {
            ssb++;
        }
    }
    if (cnt == 0)
        cn;
    else
    {
        cy;
        // cout << ':' << si << nl;
        if (si < ssi)
        {
            for (int i = 0; i < sii(s); i++)
            {
                if (i >= si && i <= si + sb - 1)
                    cout << '#';
                else
                    cout << '.';
            }
            cout << nl;

            if ((si + sb - 1) + ssb >= sii(ss))
            {
                for (int k = sii(ss) - 1; k >= 0; k--)
                {
                    if (k >= ssb)
                        cout << '#';
                    else
                        cout << '.';
                }
            }

            else
            {
                for (int i = 0; i < sii(ss); i++)
                {
                    if (i >= si + sb - 1 && i <= (si + sb - 1) + ssb - 1)
                        cout << '#';
                    else
                        cout << '.';
                }
            }
            cout << nl;
        }

        else
        {
            if ((ssi + ssb - 1) + sb >= sii(s))
            {
                for (int k = sii(s) - 1; k >= 0; k--)
                {
                    if (k >= sb)
                        cout << '#';
                    else
                        cout << '.';
                }
            }

            else
            {
                for (int i = 0; i < sii(s); i++)
                {
                    if (i >= ssi + ssb - 1 && i <= (ssi + ssb - 1) + sb - 1)
                        cout << '#';
                    else
                        cout << '.';
                }
            }
            cout << nl;
            for (int i = 0; i < sii(ss); i++)
            {
                if (i >= ssi && i <= ssi + ssb - 1)
                    cout << '#';
                else
                    cout << '.';
            }
            cout << nl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    for (int i = 1; i <= T; i++)
    {
        // cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}
