#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int n = nums.size();
        int low, mid, high;
        low = mid = 0;
        high = n - 1;
        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 2)
            {
                swap(nums[high], nums[mid]);
                high--;
            }
            else{
                mid++;
            }
        }
    };
};
int main()
{
    vector<int> arr = {2, 0, 2, 1, 1, 0};
    Solution sol;
    sol.sortColors(arr);
    for (auto it : arr)
        cout << it << " ";
    return 0;
}