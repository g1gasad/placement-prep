#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string arrangeWords(string text) {
        int n=text.size();
        if(n==1) return text;
        vector<pair<string, int>> wordLen;
        int i=0, j=0;
        string word="", newText="";
        while(j<=n){
            if(j==0) text[j] += ('a'-'A');
            if(text[j]==' ' || text[j]=='\0'){
                wordLen.push_back({word, j-i});
                i=j+1;
                word="";
            }
            else word += text[j];
            j++;
        }
        stable_sort(wordLen.begin(), wordLen.end(), [](const auto& a, const auto& b) {
            return a.second < b.second;
        });

        for(int i=0; i<wordLen.size(); i++){
            if(i==0) wordLen[i].first[0] -= ('a'-'A');
            newText += wordLen[i].first;
            if(i<wordLen.size()-1) newText += " ";
        }
        return newText;
    }
};
int main() {
    Solution sol;
    string text="Jlhvvd wfwnphmxoa qcuucx qsvqskq cqwfypww dyphntfz hkbwx xmwohi qvzegb ubogo sbdfmnyeim tuqppyipb llwzeug hrsaebveez aszqnvruhr xqpqd ipwbapd mlghuuwvec xpefyglstj dkvhhgecd kry";
    string ans=sol.arrangeWords(text);
    cout << ans << ".";
    return 0;
}