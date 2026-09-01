// LC 31 - Next Permutation 

// Approaches

// Using STL Next Permutation
// TC - O(N)
// SC - O(1)
void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin() , nums.end());
    }

// Next Greater Permutation / Lexicographical Manipulation Pattern
// Custom Next Permutation Implementation 
// TC - O(N)
// SC - O(1)
// Observation ---> Observation: To find the lexicographically next permutation, we must find the rightmost pivot element where $nums[i] < nums[i+1]$ (the first decrease from the right). We then swap this pivot with the smallest element to its right that is strictly greater than it, and reverse the remaining right suffix to restore its smallest possible lexicographical order.
void nextPermutation(vector<int>& nums) {
        int j = nums.size()-1;
        while(j > 0){
            if(nums[j] > nums[j-1]){
                break;
            }
            j--;
        }
        if(j <= 0) {
            reverse(nums.begin() , nums.end());
            return;
        }

        int k = nums.size()-1;
        while(k >= j){
            if(nums[j-1] < nums[k]){
                swap(nums[k] , nums[j-1]);
                reverse(nums.begin()+j , nums.end());
                return;
            }
            k--;
        }
    }
