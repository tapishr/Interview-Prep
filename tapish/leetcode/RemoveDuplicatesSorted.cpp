//https://leetcode.com/problems/remove-duplicates-from-sorted-array
//Algo - similar to Remove Element
int removeDuplicates(vector<int>& nums) {
    int size = nums.size();
    int count = 0;
    if(size > 1) {
        for (int i = 1; i < size; i++) {
            if (nums[i] == nums[i-1]) {
                count++;
            }
            else {
                nums[i - count] = nums[i];
            }
        }
    }
    return size - count;
}
