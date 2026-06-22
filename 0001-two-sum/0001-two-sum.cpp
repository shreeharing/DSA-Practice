class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hashMap;
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(hashMap.find(target-nums[i]) != hashMap.end()){
                return {hashMap[target-nums[i]],i};
            }else{
                hashMap[nums[i]] = i;
            }   
        }
        return {-1,-1};
    }
};