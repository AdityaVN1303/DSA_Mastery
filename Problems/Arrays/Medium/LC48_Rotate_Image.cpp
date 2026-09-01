// LC 48 - Rotate Image

// Can Also be done with extra matrix copy but not allowed by PS. 

// Transpose + Reverse
// TC - O(mxn) = O(n^2)
// SC - O(1)
void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0; i<n; ++i){
            int j = i+1;
           for(int j=i+1; j<n; j++){
            swap(matrix[i][j] , matrix[j][i]);
           }
        }

        for(auto& v : matrix){
            reverse(v.begin() , v.end());
        }
    }

// Four Way Cylclic Replacement
// TC - O(n^2)
// SC - O(1)
void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0; i<n/2; ++i){
            for(int j=0; j<n-2*i-1;j++){
                int temp = matrix[i][i+j];

                matrix[i][i+j] = matrix[n-1-i-j][i];

                matrix[n-i-1-j][i] = matrix[n-1-i][n-i-j-1];
                
                matrix[n-1-i][n-i-j-1] = matrix[i+j][n-i-1];

                matrix[i+j][n-i-1] = temp;
            }
        }
    }
