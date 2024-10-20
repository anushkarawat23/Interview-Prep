class Solution {
public:
    string breakPalindrome(string palindrome) {

        //abccba 
        // half tak check kro first non-a char and replace it with a

        int n = palindrome.size();
        if(n == 1)
            return "";    //impossible

        for(int i = 0 ; i < n/2 ; i++)
        {
            if(palindrome[i] != 'a')
            {
                palindrome[i] = 'a';
                return palindrome;
            }
        }  //iss loop se bahar aayega if half palindrome mei non-a char nhi hai like:-

        //aabaa -> b agar replace kar bhi denge, tab bhi it will be palindrome
        //hence replace the last char (jo ki pakka a hoga varna upar hee pta chal jata)
        //with b

        //aa  -> ab
        palindrome[n-1] = 'b';
        return palindrome;
        
    }
};