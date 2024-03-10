class Solution {
public:
    
    int helper(vector<int>& nums,int i,int j,int take){
        
        if(i>j) return 0;
        if(take == 0){
            return max(nums[i]+helper(nums,i+1,j,1),nums[j]+helper(nums,i,j-1,1));
        }
        else return min(helper(nums,i+1,j,0),helper(nums,i,j-1,0));
        
        
    }
    
    bool predictTheWinner(vector<int>& nums) {
        
        long long two = 0;
        for(auto i : nums) two += i;
        long long one = helper(nums,0,nums.size()-1,0);
        two = two-one;
        if(two>one) return false;
        else return true;
        
    }
};