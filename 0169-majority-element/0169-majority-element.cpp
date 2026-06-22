class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 1, winner = nums[0];

        for(int i=1;i<n;i++){
            if(nums[i] == winner){
                count++;
            }else{
                count--;
                if(count == 0){
                    winner = nums[i];
                    count = 1;
                }
            }
        }
        return winner;
    }
};