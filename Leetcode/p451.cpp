#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        string result="";
        unordered_map<char, int> freq;
        for(char ch : s) if(ch!=' ') freq[ch]++;        
        
        vector<pair<char, int>> v(freq.begin(), freq.end());
    
        sort(v.begin(), v.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });

        for(pair<char, int> it : v){
            for(int i=0; i<it.second; i++) result += it.first;
        }

        return result;
    }
};

int main() {
    Solution sol;
    string s = "What is up with this line of Codem";
    string ans = sol.frequencySort(s);
    cout << ans << endl;
    return 0;
}