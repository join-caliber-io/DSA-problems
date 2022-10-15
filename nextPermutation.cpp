class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx = -1;
        int n = nums.size();
        
        //first we travel the array from backside till we dont get a peak
        //i.e a[i]>a[i-1]
        //when we get such a variable store i in idx variable
        for(int i=n-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                idx=i;
                break;
            }
        }
        
        //if idx is -1 means array is in descending order so reverse
        //it we get ascending order which is the next permutation
        if(idx==-1)
            reverse(nums.begin(),nums.end());
        else
        {
            //now get the closest greater number to idx
            int prev = idx;
            for(int i=idx+1;i<n;i++)
            {
                if(nums[idx-1]<nums[i] and nums[i]<=nums[prev])
                    prev=i;
            }
            
            //swap idx-1 and prev
            swap(nums[idx-1],nums[prev]);
            
            //reverse the list from nums[idx] to the end
            //coz idx ke aage ka will be in ascending order
            //and reverse will descending which will be the next permutation
            reverse(nums.begin() + idx, nums.end());
            
            //and u get the required next permutation
        }
        
    }
};