class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        if(n<=8)
            return n;
        int ans1,ans2,ans3;
        if(n>8 && n <=16 ){
            ans1= 8 +(n-8)*2;
            return ans1;
        }
        if(n>16&& n <=24 ){
            ans2 = 24 +(n-16)*3;
            return ans2;
        }
       if(n>24){
            ans3 = 48+(n-24)*4;
            return ans3;
    }
    return 0;
    }
};
