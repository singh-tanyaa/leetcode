class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    
        if (nums.empty()) {
            return;
        }
        
        int indx = -1;
        int n = nums.size();
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                indx = i;
                break;
            } 
        }
        
        if (indx == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        
        int swapIdx = n - 1;
        for (int i = n - 1; i > indx; i--) {
            if (nums[i] > nums[indx]) {
                swapIdx = i;
                break;
            }
        }
        
        swap(nums[indx], nums[swapIdx]);
        reverse(nums.begin() + indx + 1, nums.end());
    }
};

        
    