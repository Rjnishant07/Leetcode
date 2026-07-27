class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=0;
        string temp="";
        while(s[i]!='\0'){
             if (isalnum(s[i])) 
            temp += s[i];
            i++;
        }
        int k=temp.size()-1;
        while(j<=k){
            if(tolower(temp[j])!=tolower(temp[k]))
            return 0;
        j++;
        k--;
        
        }
        return 1;

        
        
    

    }
};