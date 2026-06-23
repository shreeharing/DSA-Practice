class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int>result;
        int maxEle = INT_MIN;
        
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i] >= maxEle){
                result.push_back(arr[i]);
                maxEle = arr[i];
            }
        }
        reverse(result.begin(),result.end());
        return result;
    }
};