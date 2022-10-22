class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int mid = 0;
        //we have three pointers low,mid,high
        //if mid is 0 we swap mid and low and inc both
        //if mid is 1 we increment mid only
        //if mid is 2 we swap mid and high and decrement high
        //at any point anything less than low is 0. and greater than high is 2. 
        while(mid<=high){
            //if element is 0
            if(nums[mid]==0)
            {
                swap(nums[mid++],nums[low++]);
            }
            //if element is 1
            else if(nums[mid]==1)
            {
                mid++;
            }
            //if element is 2
            else if(nums[mid]==2)
            {
                swap(nums[mid],nums[high--]);
            }
        }
    }
};