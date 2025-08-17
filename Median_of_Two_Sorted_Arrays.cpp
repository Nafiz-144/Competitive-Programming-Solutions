class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {

        vector<int> c;
        float k;
        c.insert(c.end(), nums1.begin(), nums1.end());
        c.insert(c.end(), nums2.begin(), nums2.end());
        sort(c.begin(), c.end());
        int x = c.size();
        int l = 0, r = x - 1;
        int mid = (l + (r - l)) / 2;

        if (x % 2 == 1)
        {
            return c[mid];
        }
        else
        {
            k = (c[mid] + c[mid + 1]) / 2.0;
        }
        return k;
    }
};