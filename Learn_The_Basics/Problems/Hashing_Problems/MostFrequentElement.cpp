
#include <bits/stdc++.h>
using namespace std;

// Highest Occuring Element in An Array 
// Given an array nums of n integers, find the most frequent element in it i.e., the element that occurs the maximum number of times. If there are multiple elements that appear a maximum number of times, find the smallest of them.

    int mostFrequentElement(vector<int>& nums) {
        int max = *(max_element(nums.begin() , nums.end()));
        
       vector<int> arr(max+1);
        
        for(int x : nums){
            arr[x]++;
        }
        
        int maxNum = 0;
        for(int i=1; i<arr.size(); i++){
            if(arr[i] == 0) continue;
            if(arr[i] > arr[maxNum]) maxNum = i;
        }
        return maxNum;
    }
    
    
    

int main() {
    
    vector<int> v = {1 , 2 , 3 , 1 , 5 , 4 , 5 , 2};
    cout<<mostFrequentElement(v);

    return 0;
}