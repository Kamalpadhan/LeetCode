class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string tmp="";
        vector<int> Max = {0};
        for (int i=0; i<s.size(); ++i) {
            if (tmp.find(s[i])==18446744073709551615 && !s.empty()) {
                tmp.append(1,s[i]);
                if(i==s.size()-1){
                   Max.push_back(tmp.size()); 
                }
                
            }else{
                Max.push_back(tmp.size());
                i=i-tmp.size();
                tmp="";
            }
        
    }
  return *max_element(Max.begin(),Max.end());
    }
};
