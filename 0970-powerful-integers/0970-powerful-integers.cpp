class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        set<int>ans;
        int xLim = binarySearch(x,bound);
        int yLim = binarySearch(y,bound);
        
        for(int i=0;i<=xLim;i++){
            long long x1 = (long long) pow(x,i);
            if(x1 > bound)break;
            for(int j=0;j<=yLim;j++){
                long long y1 = (long long)pow(y,j);

                if(y1 > bound)break;

                long long val = (long long)x1 + y1;

                if(val <= bound){
                    ans.insert(val);
                }else{
                    break;
                }
            }
        }
        return vector<int>(ans.begin(),ans.end());
    }

    int binarySearch(int num, int bound){ 
        int low = 0, high = bound;

        while(low<=high){
            long long mid = (low + high)/2;

            if((long long)(mid*mid) <= bound){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return high;
    }
};