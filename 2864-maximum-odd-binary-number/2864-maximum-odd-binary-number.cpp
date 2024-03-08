class Solution {
public:
    string maximumOddBinaryNumber(string s) {
       int cnt = 0;
        string ns;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '1') cnt++;
            ns+= "0";
        }
        int i = 0;
        while(cnt != 1){
            ns[i] = '1';
            i++;
            cnt--;
        }
        
        ns[ns.size()-1] = '1';
        
        return ns;
        
        
    }
};