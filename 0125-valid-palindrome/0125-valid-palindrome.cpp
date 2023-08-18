class Solution {
public:
         bool isvalid(char ch)
         {
           return  isalnum(ch);
             
         }
    char toLowerCase(char ch)
    {
        if(ch>='A'&& ch<='Z')
        {
           return  ch-'A'+'a';
        }
        return ch;
    }
         bool isPalindrome(string s)
   {
             int S=0,e=s.length()-1;
             while(S<=e)
        {
             if(! isvalid(s[S]))
             {
                 S++;
             }
            else if(! isvalid(s[e]))
             {
                 e--;
             }
                 
            else if(toLowerCase (s[S])!=toLowerCase(s[e]))
            {
             return false;   
            } 
                 else
                 {
                    S++;
                     e--;
                 }
                 

       
  }
    return true;
}
};
//     bool isValid(char ch) {
//         return isalnum(ch); // This includes alphabetic characters and digits
//     }

//     char toLowerCase(char ch) {
//         if (ch >= 'A' && ch <= 'Z') {
//             return ch - 'A' + 'a';
//         }
//         return ch;
//     }

//     bool isPalindrome(string s) {
//         int start = 0;
//         int end = s.length() - 1;
//         while (start < end) {
//             if (!isValid(s[start])) {
//                 start++;
//             } else if (!isValid(s[end])) {
//                 end--;
//             } else if (toLowerCase(s[start]) != toLowerCase(s[end])) {
//                 return false;
//             } else {
//                 start++;
//                 end--;
//             }
//         }
//         return true;
//     }
// };

/*class Solution {
public:
    bool isValid(char ch)
    {
        if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    
   char toLowerCase(char ch)
   {
       if(ch>='a' && ch<='z')
       {
          return ch; 
       }
       char temp=ch-'A'+'a';
       return temp;
   }
    bool checkPalindrome(char a[],int n)
    {
        int s=0;
        int e=n-1;
        while(s<=e)
        {
            if(toLowerCase(a[s])!=toLowerCase(a[e]))
            {
                return false;
            }
            else
            {
                s++;
                e--;
            }
        }
return 1;    }
    
   public: 
    bool isPalindrome(string s) {
      string  temp="";
        for(int j=0;j<s.length();j++)
        {
            if(isValid (s[j])){
            temp.push_back(s[j]);}
        }
     for(int j=0;j<s.length();j++)
     {
         temp[j]=toLowerCase(temp[j]);
     }
        
//  return  checkPalindrome(temp);}
       // return checkPalindrome(temp);
        return checkPalindrome(temp.data(), temp.length());


    }
};*/