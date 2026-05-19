#include <bits/stdc++.h>
using namespace std;
// string longestCommonPrefix(const vector<string>& strs) {
//     // write code here...
//     int j=0;
//     int n=strs.size();
    
//     char ch=strs[0][j];
//     bool loopOn=true;

//     while((ch!='\0') && loopOn){
//         // cout << ch << " ";
//         for(int i=1; i<n; i++){
//             if(strs[i][j]!=ch){
//                 loopOn=false;
//                 break;
//             }
//         }    
//         j++;
//         ch=strs[0][j];
//     }
//     string result=strs[0].substr(0, j-1);
//     if(j==1){
//         return "";
//     }
//     else{
//         return result;
//     }
// }
string longestCommonPrefix(const vector<string>& strs) {
    int j=0;
    int n=strs.size();
    bool loopOn=true;
    char ch=strs[0][j];
    
    while(ch!='\0' && loopOn){
        for(int i=1; i<n; i++){
            if(strs[i][j]!=ch){
                loopOn=false;
                break;
                cout << "broken ";
            }
        }
        j++;
        ch=strs[0][j];
    }
    string result = strs[0].substr(0, j-1);
    
    if(j==1) return "";
    else return result;
}
int main() {
    // vector<string> strs={"nterview", "internal", "internet", "interval"};
    vector<string> strs={"pll", "p", "p"};
    string ans = longestCommonPrefix(strs);
    cout << ans;
    return 0;
}