class Solution {
public:
    void solve(vector<int>& nums, int i, set<vector<int>> &s){
        // BC 
        if(i>= nums.size()){
            s.insert(nums);
            return ;
        }

        // loop j = i to n-1 and swap to try all positions
        for(int j = i ; j < nums.size(); j++){

            // swap
            swap(nums[i],nums[j]);

            // RC
            solve(nums, i+1,s);

            // Backtracking
            swap(nums[i], nums[j]);
        }
    }


    vector<vector<int>> permuteUnique(vector<int>& nums) {
        // use set to remove duplicates
        set<vector<int>> s;
        vector<vector<int>> ans;
        int i = 0;
        solve(nums,i,s);

        for(auto &x : s){
            ans.push_back(x);
        }
        return ans;
    }
};