//Problem link -> https://leetcode.com/problems/length-of-last-word/#/description
//Counting backwards and only counting alphabets
class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.length();
        int ans = 0;
        if (size > 0){
            int i = size-1;
            while(s[i] == ' '){
                i--;
            }
            
            while((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') && i>=0){
                ans++;
                i--;
            }
        }
        return ans;
    }
};
