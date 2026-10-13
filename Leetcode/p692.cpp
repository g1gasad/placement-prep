#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void helper(vector<pair<string, int>> &v){
        
        sort(v.begin(), v.end(), [](const auto &a, const auto &b){
            if(a.second == b.second) return a.first < b.first;
            return a.second > b.second;
        });
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n=words.size();
        vector<string> result;
        unordered_map<string, int> freq;
        for(string w : words) freq[w]++;
        vector<pair<string, int>> v(freq.begin(), freq.end());
        
        helper(v);

        for(int i=0; i<k; i++) result.push_back(v[i].first);
        
        return result;
    }
};
int main() {
    Solution sol;
    vector<string> words = {"the","day","is","sunny","the","the","the","sunny","is","is"};
    int k=4;
    vector<string> ans=sol.topKFrequent(words, k);
    cout << "[ ";
    for(string w:ans) cout << w << " ";
    cout << " ]" << endl;
    return 0;
}