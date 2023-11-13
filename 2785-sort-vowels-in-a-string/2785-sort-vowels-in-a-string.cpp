class Solution {
public:
    string sortVowels(string s) {
        string ns;
        for(int i = 0;i<s.size();i++){
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                ns+= s[i];
            }
        }
        
        sort(ns.begin(),ns.end());
        
        for(int i = 0,j = 0;i<s.size();i++){
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                s[i] = ns[j];j++;
            }
        }
        
        return s;
    }
};