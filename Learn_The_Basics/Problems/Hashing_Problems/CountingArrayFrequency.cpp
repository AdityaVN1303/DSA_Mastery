#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std; 

// Number Hashing using Fixed-Size Array
// TC: O(N)
// SC: O(max_val) - Auxiliary space depends on the largest element in input
// Note: Assumes all elements in 'v' are non-negative integers.
vector<int> frequency(const vector<int>& v) {
    if (v.empty()) return {};
    
    int max_val = *max_element(v.begin(), v.end());

    // Allocate array up to max_val
    vector<int> freq(max_val + 1, 0);
    
    for (int num : v) {
        freq[num]++;
    }
    return freq;
}

// Character Hashing using Fixed-Size Array (Lowercase English Letters Only)
// TC: O(N)
// SC: O(1) - Fixed size array of 26 elements
vector<int> frequency(const string& s) {
    if (s.empty()) return {};
    
    vector<int> freq(26, 0);
    
    for (char ch : s) {
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
    }
    return freq;
}

// Character Hashing Using unordered_map
// TC: O(N) average, O(N^2) worst-case due to hash collisions
// SC: O(K) where K is the number of unique characters (O(1) upper-bounded by alphabet size)
unordered_map<char, int> frequencyMap(const string& s) {
    if (s.empty()) return {};
    
    unordered_map<char, int> freq;
    
    for (char ch : s) {
        freq[ch]++;
    }
    return freq;
}

int main() {
    // 1. Number Hashing
    vector<int> numbers = {1, 2, 3, 1, 5, 4, 5, 2};
    vector<int> freqNum = frequency(numbers);
    
    for (size_t i = 0; i < freqNum.size(); i++) {
        if (freqNum[i] != 0) {
            cout << i << "->" << freqNum[i] << endl;
        }
    }
    
    // 2. Character Hashing (Array)
    string str1 = "aditya";
    vector<int> freqChar = frequency(str1);
    
    for (size_t i = 0; i < freqChar.size(); i++) {
        if (freqChar[i] != 0) {
            char ch = static_cast<char>(i + 'a');
            cout << ch << "->" << freqChar[i] << endl;
        }
    }
    
    // 3. Character Hashing (unordered_map)
    string str2 = "aditya";
    unordered_map<char, int> freqMap = frequencyMap(str2);
    
    // Using C++17 Structural Binding
    for (const auto& [key, value] : freqMap) {
        cout << key << "->" << value << endl;
    }

    return 0;
}
