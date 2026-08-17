class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp = n;
        int sum = 0, prod =1;
        while(temp >0){
            
            sum = sum +(temp %10);
            prod = prod* (temp %10);
            temp /=10;


        }
        return prod - sum;
    }
};