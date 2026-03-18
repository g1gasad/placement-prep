#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isIsomorphic(string s, string t){
        int n=s.size();
        unordered_map<char, char> mpp1;
        unordered_map<char, char> mpp2;

        for(int i=0; i<n; i++){
            char ch1=s[i];
            char ch2=t[i];
            if(mpp1.find(ch1) != mpp1.end()){
                if(mpp1[ch1]!=ch2){
                    return false;
                }
            }
            mpp1[ch1]=ch2;
            if(mpp2.find(ch2) != mpp2.end()){
                if(mpp2[ch2]!=ch1){
                    return false;
                }
            }
            mpp2[ch2]=ch1;
        }
        return true;
    }
};
int main() {
    vector<string> s={"paper", "ill", "badc"};
    vector<string> t={"title", "hey", "baba"};
    Solution sol;
    for(int i=0; i<s.size(); i++){
        bool ans = sol.isIsomorphic(s[i], t[i]);
        if(ans) cout << "yaas"<< endl;
        else cout << "nope" << endl;
    }
    return 0;
}