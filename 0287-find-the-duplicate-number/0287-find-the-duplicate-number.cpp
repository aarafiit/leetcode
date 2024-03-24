class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int res;
        int n = nums.size();
        
        map<int,int> m;
        for(int i = 0;i<n;i++){
            m[nums[i]]++;
        }
        
        for(auto i : m){
            if(i.second > 1){
                res = i.first;break;
            }
        }
        
        return res;
        
        
    }
};