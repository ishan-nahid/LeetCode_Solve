class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int s = nums.size();
        
        vector <int> v;
        
        v.push_back(nums[0]);
        int j = 0;
        
        for(int i = 1; i < s; i++)
        {
            if(v[j] != nums[i])
            {
                v.push_back(nums[i]);
                j++;
            }
        }

        int ss = v.size();
        for(int i = 0; i < ss; i++)
        {
            nums[i] = v[i];
        }

        return ss;
    }
};
