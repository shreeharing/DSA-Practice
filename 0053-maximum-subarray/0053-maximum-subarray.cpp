class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN, curSum=0;
        int right=0, n=nums.size(), j=0;;

        for(int i=0;i<n;i++){
            curSum += nums[i];
            maxSum = max(maxSum, curSum);

            while(j<=i && curSum<0){
                curSum -= nums[j++];
            }
        }
        return maxSum;
    }
};