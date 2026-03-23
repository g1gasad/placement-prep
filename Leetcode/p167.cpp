// 167. Two Sum II - Input numbersay Is Sorted

#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &numbers, int target)
{
    int n = numbers.size();
    int i = 0;
    int j = 1;
    vector<int> result;
    while ((i < j) && (j < n))
    {
        if (numbers[i] + numbers[j] == target){
            result.push_back(i+1);
            result.push_back(j+1);
            break;
        }

        if (numbers[i] + numbers[j] < target) j++;
        if (numbers[i] + numbers[j] > target){
            i++; j = i + 1;
        }
        if (j >= n){
            i++; j = i + 1;
        }
    }
    return result;
}
int main()
{
    vector<int> ls = {1, 3, 4, 4};
    int target = 8;
    vector<int> result = twoSum(ls, target);
    cout << result[0] << " " << result[1];
    return 0;
}