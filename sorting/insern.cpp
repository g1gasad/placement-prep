#include <bits/stdc++.h>
using namespace std;
void insertion(vector<int> *vec, int n)
{
    int temp, j;
    for (int i = 1; i <= n - 1; i++)
    {
        cout << "Itr " << i <<endl;
        j=i;
        while(j>0 && ((*vec)[j-1]>(*vec)[j])){
            temp=(*vec)[j];
            (*vec)[j] = (*vec)[j-1];
            (*vec)[j-1] = temp;
            j--;
            for(auto it:(*vec)) cout << it << " ";
            cout<<endl;
        }
    }
}

int main()
{
    vector<int> ls = {10, 12, 9, 4, 1};
    int n = 5;
    insertion(&ls, n);
    // for (auto element : ls) cout << element << " ";
    return 0;
}