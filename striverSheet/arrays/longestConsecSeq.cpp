#include <bits/stdc++.h>
using namespace std;
int longestConsecutiveSequence(vector<int> &nums){
    int maxCount=1;
    int n=nums.size();
    unordered_set<int> st;
    for(int i=0; i<n; i++){
        st.insert(nums[i]);
    }
    for(int val:st){
        int cnt=1;
        if(st.find(val-1) == st.end()){ // if val-1 not in set
            while(st.find(val+1) != st.end()){ // while if val+1 in set
                cnt++;
                val++;
            }
            maxCount=max(maxCount, cnt);
        }
    }
    return maxCount;
}
int main() {
    vector<int> nums={0,3,7,2,5,8,4,6,0,1};
    int ans=longestConsecutiveSequence(nums);
    cout << "ans is : " << ans << endl;
    return 0;
}