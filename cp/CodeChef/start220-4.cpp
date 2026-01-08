#include <bits/stdc++.h>
using namespace std;

int task(vector<int> &nums){
    int n=nums.size();
    // cout << n << " ";
    for(int i=1; i<n; i=i+2){
        nums[i]=max(nums[i-1], nums[i+1]);
    }
    int min=nums[1];
    for(int j=1; j<n; j=j+2){
        if(nums[j]<min) min=nums[j];
    }
    return min;
}
int main() {
	// your code goes here
    int t, n, val;
    cin >> t;
    // t=2;
    vector<vector<int>> testCases(t);
    for(int test=0; test<t; test++){
        cin >> n;
        int totalSeats=2*n+1;
        vector<int> nums(totalSeats);
        for(int l=0; l<=totalSeats; l=l+2){
            cin >> val;
            nums[l]=val;
        }
        testCases[test]=nums;        
    }
    // testCases={{2, 0, 5}, {4, 0, 7, 0, 9}};
    for(int cnum=0; cnum<t; cnum++){
        int ans = task(testCases[cnum]);
        cout << ans << endl;
    }
}
