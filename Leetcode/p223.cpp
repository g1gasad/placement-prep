#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area_a=abs((ax1-ax2) * (ay1-ay2));
        int area_b=abs((bx1-bx2) * (by1-by2));
        if(ax1>bx2 || ax2<bx1 || ay1>by2 || ay2<by1) return area_a+area_b;
        int cx1 = (ax1 < bx1) ? bx1 : ax1;
        int cx2 = (ax2 < bx2) ? ax2 : bx2;
        int cy1 = (ay1 < by1) ? by1 : ay1;
        int cy2 = (ay2 < by2) ? ay2 : by2;
        int area_c=abs((cx1-cx2) * (cy1-cy2));
        return area_a+area_b-area_c;
    }
};
int main() {
    Solution sol;
    int ax1 = -3, ay1 = 0, ax2 = 3, ay2 = 4, bx1 = 0, by1 = -1, bx2 = 9, by2 = 2;
    int area=sol.computeArea(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2);
    cout << "Area is: " << area << endl; 
    return 0;
}