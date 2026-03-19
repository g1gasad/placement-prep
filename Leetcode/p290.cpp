#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool wordPattern(string pattern, string s){
        int n=pattern.size();
        int m=s.size();
        unordered_map<char, string> mpp1;
        unordered_map<string, char> mpp2;
        vector<string> sentence;
        for(int j=0; j<m; j++){
            string word;
            int k=j;
            while(true){
                char ch=s[k];
                if(ch==' ' || ch=='\0'){
                    sentence.push_back(word);
                    break;
                }
                word += ch;
                k++;
            }
            j=k;
        }
        if(sentence.size()!=n) return false;
        for(int i=0; i<n; i++){
            char ch=pattern[i];
            string word=sentence[i];
            // cout << word << endl;
            if(mpp1.find(ch)!=mpp1.end()){
                if(mpp1[ch]!=word){
                    return false;
                }
            }
            mpp1[ch]=word;
         
            if(mpp2.find(word)!=mpp2.end()){
                if(mpp2[word]!=ch){
                    return false;
                }
            }
            mpp2[word]=ch;
        }
        return true;
    }
};

int main() {
    vector<string> pattern={"abba", "abba", "aaaa"};
    vector<string> s={"dog cat cat dog", "dog cat cat fish", "hey hey hey hey"};
    Solution sol;
    for(int i=0; i<pattern.size(); i++){
        bool ans = sol.wordPattern(pattern[i], s[i]);
        if(ans) cout << "yus" << endl;
        else cout << "nope" << endl;
    }
    return 0;
}