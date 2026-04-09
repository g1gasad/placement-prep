#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        if(n==1) return cardPoints[0];

        int maxScore=-1;
        int leftSum=0, rightSum=0; 
        for(int i=0; i<k; i++){
            leftSum += cardPoints[i];
        }
        maxScore=max(maxScore, leftSum);
        for(int j=0; j<k; j++){
            leftSum -= cardPoints[k-1-j];
            rightSum += cardPoints[n-1-j];
            maxScore=max(maxScore, leftSum+rightSum);
        }
        return maxScore;
    }
};

int main() {
    Solution sol;
    vector<int> cardPoints={100,40,17,9,73,75};
    int k=3;
    int ans=sol.maxScore(cardPoints, k);
    cout << ans << endl;
    return 0;
}