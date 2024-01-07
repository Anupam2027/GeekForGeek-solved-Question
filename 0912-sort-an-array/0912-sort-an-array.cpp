class Solution {
public:
 void merge(vector<int>&arr,int start, int mid, int end)
{
    vector<int>temp(end-start+1);
    int left=start, right=mid+1,index=0;
    while(left<=mid && right<=end)
    {
        if(arr[left]<=arr[right])
        {
            temp[index]=arr[left];
            index++;
            left++;
        }
        else
        {
            temp[index]=arr[right];
            index++;
            right++;
        }
    }
    //left wala element bacha short ho 
    while(left<=mid)
    {
        temp[index]=arr[left];
        index++;
        left++;
    }
    //right wala element bacha short ho 
    while(right<=end)
    {
        temp[index]=arr[right];
        index++;
        right++;
    }
    //copy the temp arr value in original aaray
    index=0;
    while(start<=end)
    {
      arr[start]=temp[index];
      start++;
      index++;
    }
}
    void mergesort(vector<int>& arr,int start,int end)
{
    if(start==end)
    return;
    int mid=start+(end-start)/2;
    mergesort(arr,start,mid); //left portion
    mergesort(arr,mid+1,end); //right portion
    merge(arr,start,mid,end);
    
}
    vector<int> sortArray(vector<int>& nums) {
       mergesort(nums,0,nums.size()-1);
       return nums; 
    }
};