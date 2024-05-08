class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        vector<int> tmp(score.begin(), score.end());
        sort(tmp.rbegin(), tmp.rend());

        vector<string> ans;
        for (const auto& s : score) {
            auto it = find(tmp.begin(), tmp.end(), s);
            int rank = distance(tmp.begin(), it) + 1;

            if (rank == 1) ans.push_back("Gold Medal");
            else if (rank == 2) ans.push_back("Silver Medal");
            else if (rank == 3) ans.push_back("Bronze Medal");
            else ans.push_back(to_string(rank));
        }

        return ans;
        
    }
};