#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int f = 0, a = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (f == 0)
            {
                a = nums[i];
                f = 1;
            }
            else if (a == nums[i])
            {
                f++;
            }
            else
            {
                f--;
            }
        }
        return a;
    }
};

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    Solution sol;
    int result = sol.majorityElement(nums);
    cout << "Majority Element: " << result << endl;

    return 0;
}
