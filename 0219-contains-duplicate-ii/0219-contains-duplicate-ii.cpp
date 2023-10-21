class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map <int, int> mp;

        int sz_nums = nums.size();

        for(int i = 0; i < sz_nums; i++)
        {
            if(mp.find(nums[i]) == mp.end())
            {
                mp[nums[i]] = i;
            }
            else
            {
                if(abs(mp[nums[i]] - i) <= k)
                {
                    return true;
                }
                else
                {
                    mp[nums[i]] = i;
                }
            }
        }
        return false;
    }
};