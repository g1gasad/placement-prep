#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int k = 0; // Points to the next position to write a non-val element
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != val) {
            nums[k++] = nums[i];
        }
    }
    return k;
}

int main() {
    // vector<int> arr = {2};
    vector<int> arr = {0,1,2,2,3,0,4,2};
    int val = 3;
    int k = removeElement(arr, val);
    cout << "value of k is " << k << endl;
    for (int i = 0; i < k; ++i) cout << arr[i] << " ";
    cout << endl;
    return 0;
}