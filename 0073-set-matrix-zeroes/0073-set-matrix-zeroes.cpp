class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int numRows = matrix.size();
        int numCols = matrix[0].size();
        bool colVar = false;

        // marking zeros at 0th row and 0th col
        for(int i=0;i<numRows;i++){
            for(int j=0;j<numCols;j++){
                if(matrix[i][j] == 0){
                    if(j==0){
                        colVar = true;
                        continue;
                    }
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }   

        // Set zeros for inner elements

        for(int i=1;i<numRows;i++){
            for(int j=1;j<numCols;j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        if(matrix[0][0] == 0){
            for(int j=numCols-1;j>=0;j--){
                matrix[0][j] = 0;
            }
        }

        if(colVar){
            for(int i=0;i<numRows;i++){
                matrix[i][0] = 0;
            }
        }
    }
};