#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int, string> mpp={
            {1, "I"},
            {5, "V"},
            {10, "X"},
            {50, "L"},
            {100, "C"},
            {500, "D"},
            {1000, "M"}
        };
        auto it=mpp.find(num);
        if(it != mpp.end()) return it->second;
        string roman="";
        string num_str = str(number)
        int i=0;
        if(num_str[i]!=4 && num_str[i]!=9){
            
        }

        return roman;
    }
};
int main() {
    Solution sol;
    vector<int> nums={1, 5, 10, 50, 100, 500, 1000,
                7, 3, 11, 30, 56, 98, 153, 487, 580, 942, 1022, 1452};
    for(auto num : nums){
        string ans=sol.intToRoman(num);
        cout << num << ": " << ans << endl;
    }            
    return 0;
}