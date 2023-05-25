// valid palindrome
class Solution {
public:
     bool isPalindrome(int l, int r ,string &s)
     {
         if(l>=r)
         {
             return true;
         }
         if(s[l]!=s[r])
         {
             return false;
         }
         return isPalindrome(l+1, r-1 ,s);
     }
    bool isPalindrome(string s)
    {
        if(s==" ")
        {
            return true;
        }
         for (int i = 0; i < s.size(); i++)
         {
        if ((s[i] < 'A' || s[i] > 'Z') && (s[i] < 'a' || s[i] > 'z'))
        {
            s.erase(i, 1);
            i--;
        }
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        }
         return isPalindrome(0,s.size()-1 ,s); 
    }
};
