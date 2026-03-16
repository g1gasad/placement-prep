#include <bits/stdc++.h>
using namespace std;
// naive soln working but need better
void printer(int &num){
    printf("MaxSum so far: %d\n", num);
}

int maxPoints(vector<int> &arr, int &k){
    int n=arr.size();
    int leftSum, rightSum, maxSum;
    leftSum = rightSum = maxSum = 0;
    for(int i=0; i<k; i++){
        leftSum += arr[i];
        maxSum = max(maxSum, leftSum);
        printer(maxSum);
    }
    int rightIdx=n-1;
    for(int j=k-1; j>=0; j--){
        leftSum -= arr[j];
        rightSum += arr[rightIdx];
        maxSum = max(maxSum, leftSum+rightSum);
        rightIdx--;
        printer(maxSum);

    }
    return maxSum;
}
int main() {
    vector<int> arr = {6, 2, 3, 4, 7, 2, 1, 7, 1};
    int k=4;
    int ans=maxPoints(arr, k);
    cout << "Max is: " << ans << endl;
    return 0;
}