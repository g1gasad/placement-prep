#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0, right=n-1, maxArea=0;
        while(left < right){
            int area= (right-left) * min(height[left], height[right]);
            maxArea=max(maxArea, area);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return maxArea;
    }
};
int main() {
    Solution sol;
    vector<int> height={1,8,6,2,5,4,8,3,7};
    int ans=sol.maxArea(height);
    cout << ans;
    return 0;
}