class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        int res = 0 ;
        int ans = 0 ;
    for (int i =1 ;i <= n ; i++){
        res = (26- (s[i-1] - 'a'));
        ans += res * i ;
    }
    return ans;
    }
};