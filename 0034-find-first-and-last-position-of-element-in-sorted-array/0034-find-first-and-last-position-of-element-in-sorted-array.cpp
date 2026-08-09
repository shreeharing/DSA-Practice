class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstOccurance = binarySearch(nums,target,true);
        int lastOccurance = binarySearch(nums,target,false);

        if(firstOccurance >= nums.size() || nums[firstOccurance] != target){
            firstOccurance = -1;
        }
        if(lastOccurance <= -1 || nums[lastOccurance] != target){
            lastOccurance = -1;
        }
        return {firstOccurance,lastOccurance};
    }

    int binarySearch(vector<int>& nums, int target,bool isCeil){
        int low = 0, high = nums.size()-1;

        while(low<=high){
            int mid = (low+high)/2;

            if(isCeil){
                if(nums[mid]>=target){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }else{
                if(nums[mid]<=target){
                    low = mid + 1;
                }else{
                    high = mid - 1;
                }
            }
        }
        return (isCeil)?low:high;
    }
};