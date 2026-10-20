#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n=words.size();
        vector<vector<int>> matrix(n, vector<int>(26, 0));    
        for(int i=0; i<26; i++){
            for(int j=0; j<n; j++){
            }
        }
    }
};
int main() {
    Solution sol;
    vector<string> words = {"bella","label","roller"};
    vector<string> ans=sol.commonChars(words);
    for(string ch : ans) cout << ch << " ";
    cout << endl;
    return 0;
}