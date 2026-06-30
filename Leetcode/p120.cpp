#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<int> dp = triangle.back();

        for (int r = triangle.size() - 2; r >= 0; r--) {
            for (int c = 0; c <= r; c++) {
                dp[c] = triangle[r][c] + min(dp[c], dp[c + 1]);
            }
        }

        return dp[0];
    }
};
int main() {
    Solution sol;
    vector<vector<int>> triangle={{2},{3,4},{6,5,7},{4,1,8,3}};
    int ans=sol.minimumTotal(triangle);
    cout << ans;
    return 0;
}