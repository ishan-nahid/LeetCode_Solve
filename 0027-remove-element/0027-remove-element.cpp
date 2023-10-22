class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector <int> v;

        int sz_nums = nums.size();

        for(int i = 0; i < sz_nums; i++)
        {
            if(nums[i] != val)
            {
                v.push_back(nums[i]);
            }
        }

        int sz_v = v.size();

        for(int i = 0; i < sz_nums; i++)
        {
            if(i < sz_v)
            {
                nums[i] = v[i];
            }
            else
            {
                nums[i] = 0;
            }
        }

        return sz_v;

    }
};