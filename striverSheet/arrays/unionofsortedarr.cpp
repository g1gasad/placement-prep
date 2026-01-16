#include <bits/stdc++.h>
using namespace std;
vector<int> unionF(vector<int> &arr1, vector<int> &arr2){
    int n1=arr1.size();
    int n2=arr2.size();
    vector<int> result;
    int i, j;
    i = j = 0;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(result.size()==0 || result.back()!=arr1[i]){
                result.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(result.size()==0 || result.back()!=arr2[j]){
                result.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(j<n2){
        if(result.size()==0 || result.back()!=arr2[j]){
            result.push_back(arr2[j]);
        }
        j++;
    }
    while(i<n1){
        if(result.size()==0 || result.back()!=arr1[i]){
            result.push_back(arr1[i]);
        }
        i++;
    }
    return result;
}

int main(){
    vector<int> arr1={1,2,6,7,8,9,10};
    vector<int> arr2={4,5,11,12};
    vector<int> output=unionF(arr1, arr2);
    for(auto e:output) cout << e << " ";

    return 0;
}