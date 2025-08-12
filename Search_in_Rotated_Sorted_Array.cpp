#include <bits/stdc++.h>
using namespace std;
void lbinary_search(vector<int> &nums, int key) {}

int main()
{
    int key, n;
    cin >> key >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {

        cin >> nums[i];
        cout << nums[i];
    }
    lbinary_search(nums, key);
    return 0;
}