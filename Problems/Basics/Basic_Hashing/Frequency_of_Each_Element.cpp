#include<bits/stdc++.h>
using namespace std;

// Approaches---> 

// Approach 1 - Using Unordered Map
// TC - O(n) Average Case, O(n^2) Worst Case
// SC - O(n)

// Approach 2 - Using Sorting
// TC - O(nlogn)
// SC - O(1)

// Approach 3 - Using Frequency Array (if range of elements is known)
// Use Offset if Negative Numbers are present
// TC - O(n + k)
// SC - O(k) where k is the range of elements

// Using set and count function
// TC - O(n^2)
// SC - O(n)

void frequencyOfEachElement(vector<int> &arr) {
    unordered_map<int, int> freqMap;
    
    for (int num : arr) {
        freqMap[num]++;
    }
}

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