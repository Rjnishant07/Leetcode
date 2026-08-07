class Solution {
public:
    int value(char ch){
        if (  ch == 'I' ) return 1;
        if (  ch == 'V' ) return 5;
        if (  ch == 'X' ) return 10;
        if (  ch == 'L' ) return 50;
        if (  ch == 'C' ) return 100;
        if (  ch == 'D' ) return 500;
        if (  ch == 'M' ) return 1000;
    return 0;
    }
    int romanToInt(string s) {
        int i=0,sum= 0;
        while(s[i]!='\0'){
           if (value(s[i]) >= value(s[i+1])){
            sum = sum + value(s[i]);
            i++;
           }else{
             sum = sum - value(s[i]);
             i++;
        }
       
    }
     return sum;
    }
};