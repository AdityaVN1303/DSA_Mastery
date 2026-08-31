// LC 11 - Container With Most Water 

// Approaches 

// Can also be solved with nested loops in O(N^2) TC

// Two Pointers (Opposite Ends) (Optimal)
// Optimization Done - Skip Heights Less than min(l , r)
// Observation - Choosing Minimum of Both Ends
// Which Pointer to Move Inward ? Move the One with Smaller height. 
// TC - O(N)
// SC - O(1)
int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int water = 0;
        int maxWater = 0;
        while(i < j){
            water = min(height[i] , height[j]) * (j-i);
            maxWater = max(maxWater , water);
            
            if(height[i] > height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return maxWater;
    }
