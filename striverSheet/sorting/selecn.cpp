#include <bits/stdc++.h>
using namespace std;
int main(){
    int least;
    vector<int> ls = {10, 12, 9, 4, 1, -69, 0, 11111, 22, -2442, 2424, 12};
    for(int i=0; i<ls.size()-1; i++){
        // instead of value, assign idx
        least=i;
        for(int j=i; j<ls.size(); j++){
            if(ls[j]<ls[least]){
                least=j;
            }
        }
        if(i!=least){
        swap(ls[i], ls[least]);
    }
        for(auto e : ls) cout << e << " ";
        cout<<endl;
    }
    // cout << ls.size();
    return 0;
}