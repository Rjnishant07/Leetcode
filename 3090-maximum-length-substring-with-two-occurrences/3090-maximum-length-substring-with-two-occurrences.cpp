class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int i=0,j=0,ans = INT_MIN;
        unordered_map<char,int>freq;
        for(int j= 0;j<n;j++){
            freq[s[j]]++;
            if(freq[s[j]]>2){
                while(freq[s[j]]>2){
                     freq[s[i]]--;
                     i++;

                }
               
                
            }
        ans = max(ans,j-i+1);
        }
        return ans;
    }
};