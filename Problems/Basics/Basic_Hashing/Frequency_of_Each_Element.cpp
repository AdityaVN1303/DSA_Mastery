#include<bits/stdc++.h>
using namespace std;

// Frequency Hashing 

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
