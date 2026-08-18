class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;
        vector<string> words;
        while(i < n){
            //gap check
            while(i < n && s[i] == ' ') i++;
            if(i == n) break;
            //logic change
            int start = i;

            //word last index 
            while(i < n && s[i] != ' ') i++;

            words.push_back(s.substr(start, i - start));

        }
        string ans = "";
        for(int i = words.size() - 1 ; i >= 0 ; i--){
            ans += words[i];
            if(i != 0) ans += ' ';
        }

        return ans;
    }
};