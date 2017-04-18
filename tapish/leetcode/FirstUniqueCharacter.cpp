//https://leetcode.com/problems/first-unique-character-in-a-string/
//update ans as the previous ans' occurence increases to more than 1
int firstUniqChar(string s) {
    int size = s.size();
    if (size == 0) return -1;
    if (size == 1) return 0;
    int occurence[26];
    for (int i = 0; i < 26; i++) {
        occurence[i] = 0;
    }
    int ans = 0;
    for(int i = 0; i < size; i++) {
        occurence[(int)(s[i] - 'a')]++;
        while (occurence[(int)(s[ans] - 'a')] > 1) {
            ans++;
            if (ans > size-1) return -1;
        }
    }
    return ans;
}
