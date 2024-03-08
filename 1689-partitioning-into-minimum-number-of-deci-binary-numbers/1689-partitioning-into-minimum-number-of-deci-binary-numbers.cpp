class Solution {
public:
    int minPartitions(string n) {
        // long long  x = stoi(n);
        vector<int> v;
        // while(x != 0){
        //     v.push_back(x%10);
        //     x /= 10;
        // }
        
        for(int i = 0;i<n.size();i++){
            v.push_back(n[i]-48);
        }
        
        return *max_element(v.begin(),v.end());
        
    }
};