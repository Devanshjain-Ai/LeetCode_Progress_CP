class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int ans = 0 ;
        int small = INT_MAX;
        for (int i = 0 ; i< n ; i++){
            small = min(small , nums[i]);
        }
        for (int i = 0 ; i< n ; i++){
            ans += nums[i] - small;
        }
        return ans;
    }
};