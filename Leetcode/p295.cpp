#include <bits/stdc++.h>
using namespace std;
// break the vector into two heaps
// both the heaps need to be sorted
// if the len of both is equal then take avg of top 2
// else top element
class MedianFinder {
    priority_queue<int> leftmaxHeap;
    priority_queue<int,vector<int>,greater<int>> rightminHeap;
public:
    MedianFinder() {

    }
    void addNum(int num) {
        if(leftmaxHeap.empty() || num>leftmaxHeap.top()){
            leftmaxHeap.push(num);
        }
        else{
            rightminHeap.push(num);
        }
        if((leftmaxHeap.size() - rightminHeap.size())>1){
            rightminHeap.push(leftmaxHeap.top());
            leftmaxHeap.pop();
        }
        else if(leftmaxHeap.size()<rightminHeap.size()){
            leftmaxHeap.push(rightminHeap.top());
            rightminHeap.pop();
        }
    }
    double findMedian() {
        if(leftmaxHeap.size()==rightminHeap.size()){
            return (leftmaxHeap.top()+rightminHeap.top())/2.0;
        }
        else{
            return leftmaxHeap.top();
        }
    }
};
int main(){
    MedianFinder mf;
    mf.addNum(1);
    mf.addNum(2); // 1.5
    cout << mf.findMedian() << endl;
    mf.addNum(3); // 2
    cout << mf.findMedian() << endl;
    mf.addNum(4); // 2.5
    mf.addNum(5); // 3
    mf.addNum(6); // 3.5
    cout << mf.findMedian() << endl;
    return 0;
}