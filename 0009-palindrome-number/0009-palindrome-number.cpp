class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return 0;
            
        }
        
        int num=x, rem, ans=0;
       
        while(num!=0)
        {
            rem=num%10;
            num=num/10;
             if(ans>INT_MAX/10 ) return 0;
            ans=ans*10+rem;
        }
        if(ans==x)
        {
            return 1;
        }
        else
            return false;
         
    }
};