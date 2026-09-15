class Solution {
public:
    bool isPalindrome(string &s , int l , int r){
        while(l<r){
            if(s[l] != s[r])return false;
            l++;
            r--;
        }
        return true;
    }
    int maxPalindromes(string s, int k) {
        int n = s.size();
        int ans = 0 ,start = 0 ;
        for (int r = k-1 ; r< n ;r++){
            int l = r- k+1;
            if (l >= start && isPalindrome(s,l,r)){
                ans++;
                start = r+1;
                continue;
            }
            l = r- k ;
            if (l >= start && isPalindrome(s,l,r)){
                ans++;
                start = r+1;
            }
        }
        return ans;
    }
};