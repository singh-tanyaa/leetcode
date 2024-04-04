class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int count=0;
        for(char &ch:s){
            if(ch =='('){
                st.push(ch);
            }
            else if(ch==')')
                
                st.pop();
            
            count=max((int)st.size(),count);
        }
        return count;
    }
};