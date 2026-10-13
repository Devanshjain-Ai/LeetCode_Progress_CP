class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector <long long> temp(n, 0);
        for (int i = 0 ; i< n ; i++){
            temp[i] = 1LL* nums[i] * nums[i];
        }
         long long sum = 0;
          long long sub = 0;
        sort(temp.begin(), temp.end(), greater<long long>());
        for (int j = 0 ; j< (n+1)/2; j++){
           sum += temp[j];
        }
        for (int j = (n+1)/2 ; j< n ;j++){
            sub += temp[j];
        }
        return sum - sub;
    }
};