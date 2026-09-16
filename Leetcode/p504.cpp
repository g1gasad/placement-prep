#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverse(string &s, int left, int right){
        while(left < right){
            char temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            left++;
            right--;
        }
    }
    string convertToBase7(int num) {
        if(num==0) return "0";
        bool neg=false;
        if(num<0) neg=true;

        num = abs(num);
        
        string base7="";
        
        while(num){
            base7 += ((num % 7) + '0');
            num /= 7;
        }

        int n=base7.size();
        reverse(base7, 0, n-1);

        if(neg) return "-" + base7;
        return base7;
    }
};


int main() {
    Solution sol;
    int num=-100;
    string ans=sol.convertToBase7(num);
    cout << ans << endl;
    return 0;
}