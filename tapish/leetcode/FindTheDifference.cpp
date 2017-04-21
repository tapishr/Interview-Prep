//https://leetcode.com/problems/find-the-difference/
// Use hash map to store number of occurences
char findTheDifference(string s, string t) {
    unordered_map<char, int> hash;
    int ssize = s.size(), tsize = t.size();

    for(int i = 0; i < ssize; i++) {
        if (hash.find(s[i]) == hash.end()) {
            std::pair<char,int> p(s[i],1);
            hash.insert(p);
        }
        else {
            hash[s[i]]++;
        }
    }

    for(int i = 0; i < tsize; i++) {
        if (hash.find(t[i]) == hash.end()) {
            return t[i];
        }
        else {
            hash[t[i]]--;
            if(hash[t[i]] < 0) {
                return t[i];
            }
        }
    }
}
