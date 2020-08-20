class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        int n=s.length();
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='M') ans +=1000;
            if(s[i]=='D') ans +=500;
            if(s[i]=='L') ans +=50;
            if(s[i]=='V') ans +=5;
            
            if(s[i]=='I'){
                if(((s[i+1]=='V') || (s[i+1]=='X'))){
                    ans -=1;
                }else{
                    ans+=1;
                }
            }
            if(s[i]=='X'){
                if(((s[i+1]=='L') || (s[i+1]=='C'))){
                    ans -=10;
                }else{
                    ans +=10;
                }
            }
            if(s[i]=='C'){
                if(((s[i+1]=='D') || (s[i+1]=='M'))){
                    ans -=100;
                }else{
                    ans +=100;
                }
            }
        }
        char c=s[n-1];
        if(c=='I') ans+=1;
        if(c=='V') ans+=5;
        if(c=='X') ans+=10;
        if(c=='L') ans+=50;
        if(c=='C') ans+=100;
        if(c=='D') ans+=500;
        if(c=='M') ans+=1000;
        
        return ans;  
    }
};
