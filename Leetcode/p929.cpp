#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> st;
        for(string mail : emails){
            string finalmail="";
            bool not_at=true;
            for(int i=0; i<mail.size(); i++){
                if(mail[i]=='+' && not_at){
                    while(mail[i] != '@') i++;
                }
                if(mail[i]=='@'){
                    finalmail += mail[i];
                    not_at=false;
                }
                else if(mail[i]=='.' && not_at) continue;
                else finalmail += mail[i];
            }
            cout << finalmail << endl;
            st.insert(finalmail);
        }
        return st.size();
    }
};
int main() {
    Solution sol;
    vector<string> emails={"test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};
    int ans=sol.numUniqueEmails(emails);
    cout << ans;
    return 0;
}