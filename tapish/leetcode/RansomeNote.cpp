//https://leetcode.com/problems/ransom-note
//count occurence of each alphabet
bool canConstruct(string ransomNote, string magazine) {
    int occurence[26];
    for(int i = 0; i < 26; i++) {
        occurence[i] = 0;
    }

    int rsize = ransomNote.size();
    int msize = magazine.size();
    for(int i = 0; i < msize; i++) {
        occurence[magazine[i]-'a']++;
    }
    for(int i = 0; i < rsize; i++) {
        if(occurence[ransomNote[i]-'a'] < 1) return false;
        occurence[ransomNote[i]-'a']--;
    }
    return true;
}
