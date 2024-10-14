#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, r;
        cin >> n >> r;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<int>());

        int happy = 0;
        int remainingSeats = 2 * r;

        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                happy++;
                remainingSeats -= 1;
            } else {
                if (remainingSeats >= 2) {
                    happy += 2;
                    remainingSeats -= 2;
                } else {
                    happy++;
                    remainingSeats -= 1;
                }
            }
        }

        cout << happy << endl;
    }

    return 0;
}