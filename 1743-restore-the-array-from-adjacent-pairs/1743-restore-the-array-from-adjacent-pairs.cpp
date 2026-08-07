class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int,vector<int>>adjMap;
        int n = adjacentPairs.size();

        for(int i=0;i<n;i++){
            adjMap[adjacentPairs[i][0]].push_back(adjacentPairs[i][1]);
            adjMap[adjacentPairs[i][1]].push_back(adjacentPairs[i][0]);

        }
        int curEle=INT_MIN;

        for(auto it:adjMap){
            if(it.second.size()==1){
                curEle=it.first;
                break;
            }
        }
        vector<int>res;
        int prevEle = INT_MIN;
        while(res.size()<adjacentPairs.size()+1){
            if(prevEle != INT_MIN){
                res.push_back(prevEle);
            }
            vector<int>temp=adjMap[curEle];
            prevEle=curEle;
            if(res.size()==0 || temp.size()==1 || res.back() != temp[0]){
                curEle = temp[0];
            }else{
                curEle = temp[1];
            }
        }
        return res;
    }
};