//https://leetcode.com/problems/implement-strstr/
//Just check the first letter of needle and if it is found continue checking until everything is checked
int strStr(string haystack, string needle) {
    int hsize = haystack.size();
    int nsize = needle.size();
    if (nsize == 0 || haystack == needle) return 0;
    for(int i = 0; i < hsize - nsize + 1; i++) {
        for(int j = 0; haystack[i + j] == needle[j]; j++) {
            if(j == nsize - 1) return i;
        }
    }
    return -1;
}
