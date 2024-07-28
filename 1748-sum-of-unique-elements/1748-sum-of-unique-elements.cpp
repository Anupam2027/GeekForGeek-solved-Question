class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
         int n = nums.size();
        if (n == 0) return 0;
        
        sort(nums.begin(), nums.end());
        int sum = 0;
        for (int i = 0; i < n; ) {
            if ((i == 0 || nums[i] != nums[i - 1]) && (i == n - 1 || nums[i] != nums[i + 1])) {
                sum += nums[i];
            }
            // Move to the next different element
            int j = i + 1;
            while (j < n && nums[j] == nums[i]) {
                j++;
            }
            i = j;
        }
        return sum;
    }
};