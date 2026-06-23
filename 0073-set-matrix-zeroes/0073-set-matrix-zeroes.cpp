class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int numRow = matrix.size();
        int numCol = matrix[0].size();

        vector<vector<int>>copyMatrix(numRow,vector<int>(numCol,1));

        for(int i=0;i<numRow;i++){
            for(int j=0;j<numCol;j++){
                if(matrix[i][j] == 0){
                    setRowAndColumnToZero(copyMatrix,i,j,numRow,numCol);
                }
            }
        }

        for(int i=0;i<numRow;i++){
            for(int j=0;j<numCol;j++){
                if(copyMatrix[i][j] == 0)
                    matrix[i][j] = 0;
            }
        }
    }

    void setRowAndColumnToZero(vector<vector<int>>&matrix,int i,int j,int numRow,int numCol){
        // Set Row values to zero
        for(int k=0;k<numCol;k++){
            matrix[i][k] = 0;
        }

        // Set column values to zero
        for(int k=0;k<numRow;k++){
            matrix[k][j] = 0;
        }
    }

};