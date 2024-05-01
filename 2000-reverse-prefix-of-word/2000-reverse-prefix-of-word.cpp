class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=0,j=word.find(ch);
       reverse(word.begin(),word.begin()+j+1);
         return word;
    }
};