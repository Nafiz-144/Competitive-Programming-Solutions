#include <bits/stdc++.h>
using namespace std;
/*
int lbinary_search(vector<int> &nums, int key)
{
    int l = 0, r = nums.size() - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2; // Prevents overflow

        if (key == nums[mid])
        {
            return mid; // Found at index mid
        }
        else if (key > nums[mid])
        {
            l = mid + 1; // Search right half
        }
        else
        {
            r = mid - 1; // Search left half
        }
    }
    return -1; // Not found
}*/

int lbinary_search(vector<int> &nums, int key)
{

    int l = 0, r = nums.size() - 1;
    int mid = (l + (r - l)) / 2;
    while (nums[l] <= key <= nums[mid])
    {

        if (key == nums[mid])
        {
            return mid; // Found at index mid
        }
        else if (key > nums[mid])
        {
            l = mid + 1; // Search right half
        }
        else
        {
            r = mid - 1; // Search left half
        }
    }
}

int main()
{
    int key, n;
    cin >> key >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int result = lbinary_search(nums, key);

    if (result != -1)
    {
        cout << "Element found at index " << result << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
