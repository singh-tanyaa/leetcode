class Solution {
    public int arrayPairSum(int[] nums) {
     Arrays.sort(nums);
        int minsum=0;
        for(int i=0;i<nums.length;i+=2){
            minsum+=nums[i];
        }
        return minsum;
    }
}