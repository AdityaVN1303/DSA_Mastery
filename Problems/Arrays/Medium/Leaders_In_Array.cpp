// Leaders in An Array 

// Linear Scan (Reverse) + Maintain Max from Right
// TC - O(N)
// SC - O(1)
vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int rightMax = 0;
        for(int i=arr.size()-1; i>=0; --i){
            if(arr[i] >= rightMax) ans.push_back(arr[i]);
            
            rightMax = max(arr[i] , rightMax);
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
