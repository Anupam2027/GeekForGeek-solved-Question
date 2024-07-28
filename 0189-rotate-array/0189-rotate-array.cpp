class Solution {
public:
    
    void reverse(vector<int>& nums,int start , int end)
    {
        int i=start,j=end;
        while(i<j)
        {
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
         k = k % n;  // In case k is greater than the array size
        reverse(nums,0,n-1); //first reverse entire array
        reverse(nums,0,k-1); //then reverse first  k elements
        reverse(nums,k,n-1); //then reverse remaining elements 
    }
};