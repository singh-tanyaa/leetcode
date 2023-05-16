class Solution {
    public int missingNumber(int[] nums) {
         int total = 0, n = nums.length;
        
        int expectedSum = (n*(n+1))/2;
        for(int num:nums)
        {
            total += num;
        }
      return  expectedSum-total; 
    }
}