class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(),index = -1;

        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index = i;
                break;
            }
        }

        if(index == -1){
            reverse(nums.begin(),nums.end());
            return;
        }

        for(int i=n-1;i>=0;i--){
            if(nums[i] > nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
        custom_reverse(nums,index+1,n-1);
    }
    void custom_reverse(vector<int>&num,int startIndex,int endIndex){
        while(startIndex <= endIndex){
            int temp = num[startIndex];
            num[startIndex] = num[endIndex];
            num[endIndex] = temp;

            startIndex++;
            endIndex--;
        }
    }

};