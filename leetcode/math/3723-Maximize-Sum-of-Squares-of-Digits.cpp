class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (num * 9 < sum) return "";
        int high = sum / 9;
        int rem = sum % 9 ;
        string ans(high, '9');
        if (rem > 0 ){
            ans.push_back(rem+'0');
        }
        ans.append(num - ans.length() , '0');
        return ans;
    }
};