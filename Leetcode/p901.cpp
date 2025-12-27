#include <bits/stdc++.h>
using namespace std;

class StockSpanner{
    stack<pair<int, int>> st;
public: StockSpanner(){}

    int next(int price){
        int span=1;
        while(st.empty()==false && st.top().first<=price){
            span += st.top().second;
            st.pop();
        }
        st.push({price, span});
        return span;
    }

};

// int stockSpanner(vector<int> &arr, int todayPrice){
//     int n=arr.size();
//     stack<pair<int, int>> spans;
