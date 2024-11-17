/*#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }





}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}*/ \
#include<iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        int n; // Length of array
        cin >> n;

        vector<int> a(n);
        map<int, int> freq;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++; // Count the frequency of each element
        }

        int score = 0;

        for (auto &pair : freq)
        {
            score += pair.second / 2; // Each pair contributes 1 to the score
        }

        cout << score << endl;
    }

    return 0;
}
