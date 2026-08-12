#include <bits/stdc++.h>
using namespace std;

// Character Array ---> Use Array Hashing (Stack Array)
// Number Array ---> If till 10^6 or 10^7 , Use Array Hashing. 
// If going above 10^7 , Use unordered_map. 

// Number Hashing 
vector<int> frequency(vector<int>& v){
    if(v.empty()) return {};
    int max_val = *(max_element(v.begin() , v.end()));
  
    vector<int> freq(max_val+1 , 0);
    
    for(int num : v){
        freq[num]++;
    }
    return freq;
}

// Character Hashing 
vector<int> frequency(string s){
    if(!s.size()) return {};
    vector<int> freq(26 , 0);
    
    for(char ch : s){
        freq[ch - 'a']++;
    }
    return freq;
}

// Character Hashing Using unordered_map
unordered_map<char , int> frequencyMap(string s){
    if(!s.size()) return {};
    unordered_map<char , int> freq;
    
    for(char ch : s){
        freq[ch]++;
    }
    return freq;
}

int main() {
    
    // Number Hashing 
    // vector<int> v = {1 , 2 , 3 , 1 , 5 , 4 , 5 , 2};
    // vector<int> f = frequency(v);
    // for(int i=0; i<f.size(); i++){
    //     if(f[i] != 0){
    //         cout<<i<<"->"<<f[i]<<endl;
    //     }
    // }
    
    // Character Hashing 
    // string str = "aditya";
    // vector<int> f = frequency(str);
    // for(int i=0; i<f.size(); i++){
    //     if(f[i] != 0){
    //         char ch = static_cast<char>(i + 'a');
    //         cout<<ch<<"->"<<f[i]<<endl;
    //     }
    // }
    
    // Character Hashing Using unordered_map
    string str = "aditya";
    unordered_map<char , int> f = frequencyMap(str);
    for(auto& [key , value] : f){
        cout<<key<<"->"<<value<<endl;
    }


    return 0;
}