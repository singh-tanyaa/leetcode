class Solution {
public:
   
    
    
        
    void reverseString(vector<char>& s) {
       int n= s.size();
        int S=0;
        int e=n-1;
        while(S<=e){
            swap(s[S++],s[e--]);}
    
    }
};