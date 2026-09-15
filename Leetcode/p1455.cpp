#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int n=sentence.size();
        int m=searchWord.size();
        if(m>n) return -1;

        int i=0, j=0, wordIdx=1;
        while(i<n){
            while(sentence[i]!=searchWord[j]){
                if(sentence[i]==' ' || sentence[i]=='\0') wordIdx++;
                i++;
            }          
            while(searchWord[j]==sentence[i]){
                if(sentence[i]==' ' || sentence[i]=='\0') wordIdx++;
                j++; i++;
            }
            if(j==m) return wordIdx;
            else j=0;
            i++;
        }
        return -1;
    }
};
int main() {
    Solution sol;
    string sentence="i love bur eating burger";
    string searchWord="burg";
    int ans=sol.isPrefixOfWord(sentence, searchWord);
    cout << ans << endl;
    return 0;
}   