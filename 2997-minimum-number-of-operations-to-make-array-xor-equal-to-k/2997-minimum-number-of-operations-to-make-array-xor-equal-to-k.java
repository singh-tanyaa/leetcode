class Solution {
    public int minOperations(int[] nums, int k) {
        int mnop=0;
        for(int qrst:nums)
        {
            mnop^=qrst;
            
        }
        int uvwx = mnop^k;
        int yz=0;
        while(uvwx!=0){
            yz+=uvwx&1;
            uvwx>>=1;
        }
        return yz;
    }
}