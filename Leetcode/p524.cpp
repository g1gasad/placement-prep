#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        int m=s.size();
        string result="";
        for(string word : dictionary){
            int n=word.size();
            int j=0;
            for(int i=0; i<n; i++){
                if(word[i]==s[j]) j++;
                if(j==m && n>=result.size() && word<result) {
                    result=word;
                    break;
                }
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    string s="abpcplea";
    vector<string> dictionary = {"ale","apple","monkey","plea"};
    string ans=sol.findLongestWord(s, dictionary);
    cout << ans << endl;
    return 0;
}