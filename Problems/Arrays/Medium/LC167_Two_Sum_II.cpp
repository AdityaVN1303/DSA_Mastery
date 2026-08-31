// LC 167 - Two Sun II

// Two Pointers (Opposite Ends)
// TC - O(N)
// SC - O(1)
vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0; 
        int j = numbers.size()-1;

        while(i < j){
            if(numbers[i] + numbers[j] == target){
                return vector<int>{i+1 , j+1};
            }
            else if(numbers[i] + numbers[j] > target){
                j--;
            }
            else{
                i++;
            }
        }
        return vector<int>{-1 , -1};
    }
