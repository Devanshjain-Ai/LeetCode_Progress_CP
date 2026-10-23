class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n = nums.size();
        int k= -1;// for all the bits to be one we take simply -1
        for (int i = 0 ; i< n ; i++){
            if(nums[i] != i){
                k = (k & nums[i]);
            }
        }
        return k == -1 ?0 : k;
    }
};