class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int size = max(word1.size(),word2.size());
        string merged;

        for(int i = 0;i<size;i++){
            if(i>=word1.size()) merged += word2[i];
            else if(i>=word2.size()) merged += word1[i];
            else {
                merged += word1[i];
                merged += word2[i];
            }
            
        }

        return merged;
        
    }
};