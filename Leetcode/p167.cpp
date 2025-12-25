// 167. Two Sum II - Input Array Is Sorted

#include <bits/stdc++.h>
using namespace std;

pair<int, int> twoSum(vector<int> &arr, int target)
{
    int n = arr.size();
    int i = 0;
    int j = 1;
    while ((i < j) && (j < n))
    {
        cout << i << ", " << j << endl;
        if (arr[i] + arr[j] == target)
            return {i, j};

        if (arr[i] + arr[j] < target)
            j++;
        
        if (arr[i] + arr[j] > target){
            i++;
            j = i + 1;
        }

        if (j >= n)
        {
            i++;
            j = i + 1;
        }
    }
    return {-1, -1};
}
int main()
{
    vector<int> ls = {1, 2, 7, 11, 15, 18};
    int target = 13;
    pair<int, int> result = twoSum(ls, target);
    cout << result.first << " " << result.second;
    return 0;
}