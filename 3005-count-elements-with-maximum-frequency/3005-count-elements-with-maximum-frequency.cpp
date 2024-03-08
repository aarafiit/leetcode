#include<bits/stdc++.h>
class Solution {
public:
    
   
    
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i = 0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int ans = 0;
        
        
        
        
        int tmp = INT_MIN;
        for(auto i : m){
            if(i.second > tmp)
            tmp = i.second;
        }
        
        for(auto i : m){
            if(i.second == tmp) ans+= i.second;
        }
        
        return ans;
    }
};