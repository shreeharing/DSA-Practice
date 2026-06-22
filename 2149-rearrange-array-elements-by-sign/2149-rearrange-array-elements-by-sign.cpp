class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int oddPositionNegative = 1;
        int evenPositionPositive = 0;
        int n = nums.size();
        vector<int>result(n,0);

        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                result[evenPositionPositive] = nums[i];
                evenPositionPositive += 2;
            }else{
                result[oddPositionNegative] = nums[i];
                oddPositionNegative += 2;
            }
        }
        return result;
    }
};