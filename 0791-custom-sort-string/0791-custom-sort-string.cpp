class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> sCharFreqMp;
        for(auto currChr : s)sCharFreqMp[currChr]++;
        string res = "";
        
        for(auto currChr : order){
             if(sCharFreqMp.find(currChr) != sCharFreqMp.end()){
                 int freq = sCharFreqMp[currChr];
                 while(freq != 0){
                     res+= currChr;
                     freq--;
                 }
                 sCharFreqMp[currChr] = 0;
             }
        }
        for(auto currChr : s){
            if(sCharFreqMp[currChr] != 0){
                res += currChr;
                sCharFreqMp[currChr]--;
            }
        }
        return res;
    }
};