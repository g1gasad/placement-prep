#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int n=words.size();
        string row1="qwertyuiop";
        string row2="asdfghjkl";
        string row3="zxcvbnm";
        int keySet[3][26]={0};
        for(int i=0; i<row1.size(); i++) keySet[0]=1;
        for(int i=0; i<row2.size(); i++) keySet[1]=1;;
        for(int i=0; i<row3.size(); i++) keySet[2]=1;;

        for(int i=0; i<n; i++){
            string word=words[i];
            for(int j=0; j<keySet[0]; j++){
                if(tolower(word[0])==keySet[0][j])
            }
        }
    }
};
int main() {
    Solution sol;
    vector<string> words={"Hello","Alaska","Dad","Peace"};
    vector<string> ans=sol.findWords(words);
    for(string word : ans) cout << word << " ";
    return 0;
}