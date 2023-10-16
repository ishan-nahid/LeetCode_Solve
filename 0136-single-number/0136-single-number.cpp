class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map <int, int> mp;

        int size_of_nums = nums.size();


        for(int i = 0; i < size_of_nums; i++)
        {
            mp[nums[i]]++;
        }
       

        for(auto x : mp)
        {
            // cout << x.first << " " << x.second << endl;
            if(x.second == 1)
            {
                return x.first;
            }
        }
        return nums[0];
    }
};