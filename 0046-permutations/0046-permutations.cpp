


class Solution {
    public:
    void permute(vector<int> &nums,int k,vector<vector<int>> &ans){
    if(k == nums.size()-1) {
        ans.push_back(nums);
        return;
    }
        
    for(int i = k;i<nums.size();i++){
        swap(nums[k],nums[i]);
        permute(nums,k+1,ans);
        swap(nums[k],nums[i]);
        
    }
    return;
}

    vector<vector<int>> permute(vector<int>& nums) {
           vector<vector<int>> ans;
        permute(nums,0,ans);
        return ans;
        
    }
    
    // void rec(int idx,vector<int>&nums,vector<vector<int>>&ans){
    //     //if our index reached nums.size() then we will and the nums in ans and return
    //     if(idx==nums.size()){
    //         ans.push_back(nums);
    //         return;
    //     }
    //     //we are traversing from idx to nums.size() and swapping the nums[i] and nums[idx]
    //     for(int i=idx;i<nums.size();i++){
    //         swap(nums[idx],nums[i]);
    //         rec(idx+1,nums,ans);
    //         //backtracking 
    //         swap(nums[idx],nums[i]);
    //     }
    // }
    // vector<vector<int>> permute(vector<int>& nums) {
    //     //we have created the ans vector for storing all the permutation in it
    //     vector<vector<int>>ans;
    //     //we are calling recursive function for the 0th index
    //     rec(0,nums,ans);
    //     return ans;
    // }
};