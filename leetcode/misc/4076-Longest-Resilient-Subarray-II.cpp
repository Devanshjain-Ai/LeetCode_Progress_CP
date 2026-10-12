class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> temp(n,0);
        for (int i = 0 ; i < n; i++){
            temp[i] = nums[i] % k; 
        }
        int str = -1;
        int rem = -1;
        int ans = 1;
        int len = -1;
        for (int i= 0 ; i< n ;i++){
            if (rem != temp[i]){
                rem = temp[i];
                str = i;
                len = 1;
            }
            else{
                len++;
                if (((len-1)*rem)% k == 0){
                    ans = max(ans ,i -str +1 );
                }
            }
        }
        return ans;
    }
};