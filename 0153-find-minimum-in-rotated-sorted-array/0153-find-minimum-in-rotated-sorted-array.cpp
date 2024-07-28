class Solution {
public:
    
    int ans(vector<int>& nums,int n)
    {
        int l=0,r=n-1;
        while(l<r){
            int mid=l+(r-l)/2;
            if(nums[mid]>nums[r])
            {
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        return nums[r];
    }
    
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int index=ans( nums, n);
        
        return index;
    }
};