class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>evenIndices;
        vector<int>oddIndices;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(i%2==0){
                evenIndices.push_back(nums[i]);
            }else{
                oddIndices.push_back(nums[i]);
            }
        }

        sort(evenIndices.begin(),evenIndices.end());
        sort(oddIndices.begin(),oddIndices.end(),greater<>());
        int j=0,k=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                nums[i] = evenIndices[j++];
            }else{
                nums[i] = oddIndices[k++];
            }
        }
        return nums;
    }
};