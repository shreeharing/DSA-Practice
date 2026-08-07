class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n=s.size();
        if(n==0)return 0;

        int maxLen = 1;
        int curLen = 1;

        for(int i=0;i<n-1;i++){
            char wantCh = s[i] + 1;
            if(s[i+1] == wantCh){
                curLen++;
            }else{
                curLen = 1;
            }
            maxLen = max(curLen,maxLen);
        }
        return maxLen;
    }
};