#include <bits/stdc++.h>
using namespace std;

void reversefunc(vector<int> &nums, int begin, int end){
    int temp;
    while(begin<=end){
        temp=nums[begin];
        nums[begin]=nums[end];
        nums[end]=temp;
        begin++; end--;
    }
}
void rotate(vector<int> &nums, int k){
    int n=nums.size();
    k=k%n;
    cout << "size is " << n << endl;
    reversefunc(nums, 0, n-k-1);
    reversefunc(nums, n-k, n-1);
    reversefunc(nums, 0, n-1);
};

int main(){
    vector<int> ls={1, 2, 3, 4, 5};
    int k=6;
    rotate(ls, k);
    for(auto e:ls) cout << e << " ";
}