bool isPalindrome(int x) {
    int temp = x;
    long long reverse = 0;
    while(temp>0){
       
        reverse = reverse*10 + temp%10;
        temp/=10;
    }
    if(reverse == x)
    return 1;
    else
    return 0;
    
}