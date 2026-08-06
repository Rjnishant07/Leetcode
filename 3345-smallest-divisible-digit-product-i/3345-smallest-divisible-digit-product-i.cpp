class Solution {
public:
    int divide(int n){
         int temp = n;
        int mult = 1;
        while(temp>0){
            int d1 = temp % 10;
            mult = mult *d1;
            temp = temp/10;
             }
        return mult;
    }
    int smallestNumber(int n, int t) {
        while(true){
           int div =  divide(n);
           if(div%t==0){
             return n;
           }
           n++;
        }
        return 0;
    }
};