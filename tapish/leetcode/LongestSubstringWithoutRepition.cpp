int lengthOfLongestSubstring(string s) {
    int size = s.length();
    if (size == 0) return 0;
    int subslen = 1;
    for (int i = 0; i < size; i++) {
        unordered_map<char, int> freq;

        int count = 0;
        while (freq.find(s[i]) == freq.end()) {
            count++;
            freq[s[i]] = i;

            i++;
            if (i >= size) {
                break;
            }

        }

        subslen = (count > subslen) ? count : subslen;
        i = (i >= size) ? i : freq[s[i]]; //Begin from last non repeating char
    }

    return subslen;
}
