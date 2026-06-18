#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int maxDiff=INT_MIN;
        int fuel_in_tank=0;
        int pump=-1;
        for(int i=0; i<n; i++){
            if(gas[i]-cost[i] > maxDiff){
                maxDiff=gas[i]-cost[i];
                pump=i;
            }
        }
        cout << pump << endl;
        fuel_in_tank += gas[pump];
        for(int j=pump; j<n+pump; j++){
            int required_fuel=fuel_in_tank-cost[j%n];
            
            if(required_fuel < 0) return -1;

            fuel_in_tank = fuel_in_tank - cost[j%n] + gas[(j+1)%n];
        }
        return pump;
    }
};
int main() {
    Solution sol;
    vector<int> gas={2,3,4};
    vector<int> cost={3,4,3};
    int ans=sol.canCompleteCircuit(gas, cost);
    cout << "We can start at: " << ans << endl;
    return 0;
}