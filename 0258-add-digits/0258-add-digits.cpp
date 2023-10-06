class Solution {
public:
    int addDigits(int num) {
       
        while(num>9){
            int ans =0, rem;
        while(num!=0)
        {
            rem=num%10;//8   3   1
            num/=10;//3   0   1
            ans+=rem;//8  3  8+3=11    1
        }
        num = ans;// 11     1
        }
   return num;
    }
};