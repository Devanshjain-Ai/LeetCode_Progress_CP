class Solution {
public:
    long long countValidSubstrings(string s) {
        long long ans = 0 ;
    int n = s.size();
    int lastA = -1;
    int lastAB = -1;
    int lastABC = -1;
    for (int i =0 ; i < n ; i++){
        if(s[i] == 'a'){
            lastA = i ;
        }
        else if(s[i] == 'b'){
            if(lastA != -1){
                lastAB = lastA;
            }
        }
        else if(s[i] == 'c'){
            if(lastAB != -1){
                lastABC= max(lastABC, lastAB);
            }
        }
        ans += i - lastABC;
    }
    return ans;
    }
};