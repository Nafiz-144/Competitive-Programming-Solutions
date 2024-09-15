#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> a = {"a", "e", "i", "o", "u"};

        // Print the first 'n' vowels, looping over them if needed
        for (int i = 0; i < n; ++i)
        {
            cout << a[i % 5] << " "; // Using modulus to loop over vowels
        }

        cout << endl; // Ensure a newline after each test case
    }
    return 0;
}
