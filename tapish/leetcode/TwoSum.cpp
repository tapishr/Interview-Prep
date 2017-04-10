//Problem link -> https://leetcode.com/problems/two-sum/
//Time and Space O(n) - Insert all values in hash map. Substract each number from target and find difference in hash map.
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> idxs, diffs;
    unordered_map<int, int> hash;
    int size = nums.size();
    int diff;
    for (int  i = 0; i < size; i++) {
        hash[nums[i]] = i;
    }
    for (int  i = 0; i < size; i++) {
        diff = target - nums[i];
        unordered_map<int, int>::iterator it = hash.find(diff);
        if(it != hash.end()) {
            int idx = it->second;
            if (idx == i) continue;
            if (idx < i){
                vector<int> A{idx, i};
                return A;
            } 
            else{
                vector<int> A{i, idx};
                return A;
            }  
        }
    }
}
