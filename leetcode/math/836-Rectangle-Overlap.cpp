class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int j = rec1[0];
        int k = rec1[2];
        int i = rec1[1];
        int l = rec1[3];
        if (rec2[0] >= k || rec2[2] <= j)
            return false;
        if (rec2[3] <= i || rec2[1] >= l)
            return false;
        return true;
    }
};