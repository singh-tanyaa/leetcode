class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int i=0;
        
        int n=nums.size();
        int x= n/3;
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        for(auto i:freq)
        {
            if(i.second>x)
                ans.push_back(i.first);
                
        }
        return ans;
    }
};