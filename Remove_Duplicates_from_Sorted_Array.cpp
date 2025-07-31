#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
        {
            return 0;
        }

        int c = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[c] = nums[i];
                c++;
            }
        }
        return c;
    }
};

int main()
{
    int n;
    cout << "Enter number of elements (sorted array): ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " sorted elements (e.g., 1 1 2 2 3 3 4): ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Solution sol;
    int newLength = sol.removeDuplicates(nums);

    cout << "After removing duplicates, length: " << newLength << endl;
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
