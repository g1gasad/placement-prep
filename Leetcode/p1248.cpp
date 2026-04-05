#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to calculate number of subarrays with sum exactly equal to goal
    int numberOfSubarrays(vector<int>& nums, int goal) {
        // Return difference between subarrays with sum at most goal and at most (goal - 1)
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }

private:
    // Helper function to compute number of subarrays with sum at most k
    int atMost(vector<int>& nums, int k) {
        // If k is negative, no such subarrays exist
        if (k < 0) return 0;

        int left = 0;
        int sum = 0;
        int count = 0;

        // Traverse the array using right pointer
        for (int right = 0; right < nums.size(); right++) {
            // Add current element to sum
            sum += (nums[right]&1);

            // Shrink the window from the left if sum exceeds k
            while (sum > k) {
                sum -= (nums[left]&1);
                left++;
            }

            // Add the number of valid subarrays ending at right
            count += (right - left + 1);
        }

        return count;
    }
};

// Driver code
int main() {
    Solution sol;
    vector<int> nums = {2, 1, 1, 0, 1, 0, 1};
    int goal = 2;
    cout << sol.numberOfSubarrays(nums, goal) << endl; 
    return 0;
}
