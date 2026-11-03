class Solution {
public:
    int minMoves(vector<int>& nums) {
        int large = INT_MIN;
        int n = nums.size();
        int ans = 0;
        for (int i = 0 ; i< n ; i++){
            large = max(large, nums[i]);
        }
        for (int i = 0 ; i< n ; i++){
            ans += large - nums[i];}
            return ans;
    }
};