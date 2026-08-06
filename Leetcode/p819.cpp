#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        int n=banned.size();
        unordered_map<string, int> mpp;
        int maxFreq=0;
        string word="";
        for(int i=0; i<paragraph.size(); i++){
            char ch=tolower(paragraph[i]);
            if(ch>='a' && ch<='z') word += tolower(ch);
            if(ch==' '){
                mpp[word]++;
                maxFreq=max(maxFreq, mpp[word]);
                word="";
            }
        }
        if(!word.empty()) mpp[word]++;

        for(auto it : mpp) ;
    }
};
int main() {
    Solution sol;
    string paragraph="Bob hit a ball, the hit BALL flew far after it was hit.";
    vector<string> banned={"hit"};
    string ans=sol.mostCommonWord(paragraph, banned);
    cout << ans;
    return 0;
}