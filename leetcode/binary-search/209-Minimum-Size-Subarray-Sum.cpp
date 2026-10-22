class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int sum =0;
        int minL = INT_MAX;
        for(int right =0; right< n ;right++){
            sum += nums[right];
            while (sum >= target){
                int len = right - left +1 ;
                minL = min(minL , len);
                sum -= nums[left];
                left++;
            }
        }
        if (minL == INT_MAX) return 0;
        return minL;
    }
};