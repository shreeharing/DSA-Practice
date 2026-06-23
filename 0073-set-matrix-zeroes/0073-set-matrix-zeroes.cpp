class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int numRow = matrix.size();
        int numCol = matrix[0].size();

        vector<int>rows(numRow,-1);
        vector<int>columns(numCol,-1);

        for(int i=0;i<numRow;i++){
            for(int j=0;j<numCol;j++){
                if(matrix[i][j] == 0){
                    rows[i] = 0;
                    columns[j] = 0;
                }
            }
        }

        for(int i=0;i<numRow;i++){
            if(rows[i] == 0){
                for(int j=0;j<numCol;j++){
                    matrix[i][j] = 0;
                }
            }
        }

        for(int i=0;i<numCol;i++){
            if(columns[i] == 0){
                for(int j=0;j<numRow;j++){
                    matrix[j][i] = 0;
                }
            }
        }
    }
};