#include<bits/stdc++.h>
using namespace std;

// Find Frequency of Each Element

// Approaches
// Hashmap - TC - O(N) , SC - O(N)
// Sorting - TC - O(NlogN) , SC - O(1) (Uses Linear Scan)
// Array Hash - (TC - O(N + k) SC - O(K) (No Hash Collisions) (Requires Small Range) (Works Like Counting Sort before Reconstruction)
// In-Place Modulo Hashing (Requires Fix Range) (TC - O(N) SC - O(1)) & Array Modification is allowed

// Frquency Map Approach 
void frequencyOfEachElement(vector<int> &arr) {
    unordered_map<int, int> freqMap;
    
    for (int num : arr) {
        freqMap[num]++;
    }
}

// Frequency Hashing with Array Hash 
// Offset Logic 
// Offset: A value added/subtracted to shift elements into a valid index range (Starting from 0)
void frequencyOfEachElement2(vector<int> &arr) {

    int maxElement = *max_element(arr.begin(), arr.end());
    int minElement = *min_element(arr.begin(), arr.end());

    vector<int> freqMap(maxElement - minElement + 1, 0);
    
    for (int num : arr) {
        freqMap[num - minElement]++;
    }

    // Get the Original Value Back by Adding MinElement 
}


// In Place Modulo Hashing 
// TC - O(N)
// SC - O(1)
// Requires Strict Range (max - min + 1) <= n

// Range - [0 to N-1]
void moduloHashing(vector<int>& nums){
    int n = nums.size();

    // Encoding
    for(int x : nums){
        int originalValue = x%n;
        nums[originalValue] += n;
    }

    // Decoding
    for(int i = 0; i<nums.size(); ++i){
        cout<<i<<" : "<<nums[i]/n<<endl;
    }
}

// Custom Range - [x , y]
void moduloHashingCustom(vector<int>& nums){
    int maxVal = *(max_element(nums.begin() , nums.end()));
    int minVal = *(min_element(nums.begin() , nums.end()));
    int n = nums.size();

    // (r - l + 1) gives number of slots in array
    if((maxVal - minVal + 1) > n) return;

    // Converting to 0 to N-1 range  because if original nums[i] > n , collisions will occur 
    for(int i=0; i<nums.size(); ++i){
        nums[i] -= minVal;
    }

    // Encoding
    for(int x : nums){
        int originalValue = (x)%n;
        nums[originalValue] += n;
    }

    // Decoding
    for(int i = 0; i<nums.size(); ++i){
        cout<<i+minVal<<" : "<<nums[i]/n<<endl;
    }
}
