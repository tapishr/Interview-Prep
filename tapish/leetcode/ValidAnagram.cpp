//https://leetcode.com/problems/valid-anagram/
//Use hashmap to store number of occurence of each letter
bool isAnagram(string s, string t) {
    int ssize = s.size();
    int tsize = t.size();
    unordered_map<char, int> hash;
    for(int i = 0; i < ssize; i++) {
        if (hash.find(s[i]) == hash.end()){
            hash.insert({s[i], 1});
        }
        else {
            hash[s[i]]++;
        }
    }
    for(int i = 0; i < tsize; i++) {
        unordered_map<char, int>::iterator it = hash.find(t[i]);
        if (it != hash.end()) {
            it->second--;
        }
        else {
            return false;
        }
    }
    for(int i = 0; i < tsize; i++) {
        unordered_map<char, int>::iterator it = hash.find(t[i]);
        if (it->second != 0) return false;
    }
    for(int i = 0; i < ssize; i++) {
        unordered_map<char, int>::iterator it = hash.find(s[i]);
        if (it->second != 0) return false;
    }

    return true;
}
