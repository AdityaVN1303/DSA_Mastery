// LC 54 - Spiral Matrix 

// Approaches

// Boundary Shrinking (Optimal)
// TC - O(mxn)
// SC - O(1)
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> ans(m*n , 0);
        
        int colStart = 0;
        int colEnd = n-1;
        int rowStart = 0;
        int rowEnd = m-1;

        int itr = 0;
        while(colStart <= colEnd && rowStart <= rowEnd){
            for(int i=colStart; i<= colEnd; ++i){
                ans[itr++] = matrix[rowStart][i];
            }

            for(int i=rowStart+1; i<= rowEnd; ++i){
                ans[itr++] = matrix[i][colEnd];
            }

            if(rowStart < rowEnd){
                for(int i=colEnd-1; i>= colStart; --i){
                    ans[itr++] = matrix[rowEnd][i]; 
                    }  
                }

            if(colStart < colEnd){
                for(int i=rowEnd-1; i> rowStart; --i){
                ans[itr++] = matrix[i][colStart];
            }
                }

            colStart++;
            colEnd--;
            rowStart++;
            rowEnd--;
        }
        return ans;
    }

// Direction Vectors + Visited Matrix
// TC - O(mxn)
// SC - O(mxn)
