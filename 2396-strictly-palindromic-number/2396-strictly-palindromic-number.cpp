class Solution {
public:
    int binary(long long n){
        long long bin=0;
        while(n>0){
            bin= bin*10+n%2;
            n = n/2; 

        }
        return bin;
    }
    
    bool isStrictlyPalindromic(int n) {
        long long b= binary(n);
         long long rev =0;
        while(b>0){
        rev  = rev*10+ b%10;
        b/=10;
        }
        return (b==rev);
    }
};