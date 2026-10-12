#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int convert_to_int(string x){
        int num=0;
        int n=x.size();
        for(int i=0; i<n; i++){
            num = num*10 + (x[i]-'0');
        }
        return num;
    }
    void reverse(string &s, int left, int right){
        while(left <= right){
            char temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            left++; right--;
        }
    }
    string convert_to_str(int x){
        string s="";
        while(x){
            s = s + (x%10 + "0");
            x /= 10;
            cout << s << endl;
        }
        reverse(s, 0, s.size()-1);
        return s;
    }
    string multiply(string num1, string num2) {
        int a=convert_to_int(num1);
        int b=convert_to_int(num2);
        int c=a*b;
        // printf("%d x %d = %d\n", a, b, c);
        string result=convert_to_str(c);
        return result;
    }
};
int main() {
    Solution sol;
    string num1="123", num2="456";
    string ans=sol.multiply(num1, num2);
    cout << ans << endl;
    return 0;
}