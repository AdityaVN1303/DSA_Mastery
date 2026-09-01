// LC 73 - Set Matrix Zeros

// Can also be solved with duplicate matrix

// Using Tracking Arrays (Non Optimal)
// TC - O(mxn)
// SC - O(m + n)
void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        vector<bool> rowCount(m , false);
        vector<bool> colCount(n , false);

        for(int i=0; i<m; ++i){
            for(int j=0; j<n; ++j){
                if(matrix[i][j] == 0){
                    rowCount[i] = true;
                    colCount[j] = true;
                }
            }
        }

        for(int i=0; i<m; ++i){
            for(int j=0; j<n; ++j){
                if(rowCount[i] || colCount[j]){
                    matrix[i][j] = 0;
                }
            }
        }
    }

// In Place Markers in First Row , Column (Optimal)
// TC - O(mxn)
// SC - O(1)
void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        bool firstRow = false;
        bool firstCol = false;

        for(int i=0; i<m; ++i){
            for(int j=0; j<n; ++j){
                if(matrix[i][j] == 0){
                    if(i == 0) firstRow = true;
                    if(j == 0) firstCol = true;

                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                    
                }
            }
        }


        for(int i=1; i<m; ++i){
            for(int j=1; j<n; ++j){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        if(firstRow){
            for(int i=0; i<n; ++i){
                matrix[0][i] = 0;
            }
        }

        if(firstCol){
            for(int i=0; i<m; ++i){
                matrix[i][0] = 0;
            }
        }
    }
