#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &arr, int n)
{
    int j = 0;
    int i = n - 1;
    int temp;
    while (arr[i] == 0)
    {
        i--;
        cout << i << endl;
    }
    while (j < i)
    {
        // cout << j;
        if (arr[j] == 0)
        { // run if arr[j] is 0 and
            if (arr[i] != 0)
            { // arr[i] is not 0
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i--;
            } // i-- if arr[i] is 0
            else
            {
                i--;
                j--;
            }
        }
        j++;
    }
}
int main()
{
    vector<int> ls = {3, 0, 0, 0, 1, 0, 0, 34};
    int n = ls.size();
    moveZeroes(ls, n);
    for (auto e : ls)
        cout << e << " ";
    return 0;
}