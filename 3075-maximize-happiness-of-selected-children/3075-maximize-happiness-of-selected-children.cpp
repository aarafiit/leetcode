class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        
        sort(happiness.begin(),happiness.end(),greater<int>());
        long long sum = 0;
        long long j = 0;
        
        for(int i = 0;i<k;i++){
            if((happiness[i] - j) < 0 ) continue;
            sum += (happiness[i] - j);
            j++;
        }
        
        return sum;
        
    }
};