#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;
void bubble(vector<int>* vec, int n){
    for(int i=0; i<=n-1; i++){
        int didSwap=0;
        for(int j=0; j<=n-i-2; j++){
            if((*vec)[j]>(*vec)[j+1]){
                swap((*vec)[j], (*vec)[j+1]);
                didSwap=1;
                // for(auto element: *vec) cout << element << " ";
                // cout << endl;
            }
        }
        if(didSwap==0){
            break;
        }
    }
};


int main() {
    cout << "Enter Evenly Spaced Integers: ";
    string line;
    getline(cin, line);

    stringstream ss(line);
    int temp;
    vector<int> nums;

    while(ss >> temp){
        nums.push_back(temp);
    }
    int n = nums.size();
    bubble(&nums, n);
    for(auto element:nums) cout << element << " ";

    return 0;
}