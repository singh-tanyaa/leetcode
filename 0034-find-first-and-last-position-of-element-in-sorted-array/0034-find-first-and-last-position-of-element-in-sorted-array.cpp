class Solution {
public:
     int right_occur(vector<int>& nums, int target,int n){
        int right_pos=-1;
        int s=0,e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                right_pos=mid;
                s=mid+1;
                
            }
            else if(nums[mid]<target)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return right_pos;
    }
    
    
    int left_occur(vector<int>& nums, int target,int n){
        int left_pos=-1;
        int s=0,e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                left_pos=mid;
                e=mid-1;
            }
            else if(nums[mid]<target)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return left_pos;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
       
        int n=nums.size();
        int left_pos= left_occur(nums,target,n);
     int right_pos = right_occur(nums,target,n);
        
        return{left_pos,right_pos};
    }
};