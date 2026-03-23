#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int end=n-1;

        while(s[end]==' ' && end>=0){
            end--;
        }
        if(end==0) return 1;

        int start=end;
        while(start>=0){
            if(s[start]==' ') break;
            start--;
        }

        // printf("\nstart %d | end %d\n", start, end);
        return end-start;
    }
};
int main() {
    vector<string> ss={"day", "Hello World",
                    "   fly me   to   the moon  ",
                    "luffy is still joyboy",
                "a "};
    Solution sol;
    for(int i=0; i<ss.size(); i++){
        int ans=sol.lengthOfLastWord(ss[i]);
        cout << i+1 << ". "<< ss[i] << ">> " << ans << endl;
    }
    return 0;
}