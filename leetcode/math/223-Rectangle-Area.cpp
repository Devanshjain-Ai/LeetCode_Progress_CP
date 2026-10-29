class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        long long x1 = ax2- ax1;
        long long y1 = ay2 - ay1;
        long long a1=  1LL * x1*y1;
        long long x2 = bx2 - bx1 ;
        long long y2 = by2 -by1;
        long long a2 =1LL * x2* y2 ;
    long long width = max(0 , min(ax2 ,bx2 )- max(ax1 , bx1));
    long long height= max(0 , min(ay2 , by2) - max(ay1 , by1));
        long long common = 1LL * (width* height);
        return a1+ a2 - common;
    }
};