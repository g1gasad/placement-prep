#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool canConstruct(string ransomNote, string magazine){
        int n=magazine.size();
        int m=ransomNote.size();
        if(m>n) return false;
        int arr1[26]={0};

        for(int i=0; i<n; i++){
            char ch=magazine[i];
            arr1[ch-'a']++;
        }

        for(int j=0; j<m; j++){
            char chn=ransomNote[j];
            if(arr1[chn-'a']>0){
                arr1[chn-'a']--;
            }
            else return false;
        }

        return true;
    }
};
    

int main() {
    string magazine = "aab";
    string ransomNote = "aa";
    Solution sol;
    bool ans = sol.canConstruct(ransomNote, magazine);
    if(ans) cout << "yuss";
    else cout << "nope";
    return 0;
}