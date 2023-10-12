class Solution {
public:
    int romanToInt(string s) {
        int ss = s.size();

        long long int sum = 0;

        unordered_map <char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        char x = s[0];
        if(ss == 1)
        {
            return mp[x];
        }
        for(int i = 0; i < ss-1; i++)
        {
            // cout << sum << endl;
            if(mp[s[i]] < mp[s[i+1]])
            {
                sum += (mp[s[i+1]]-mp[s[i]]);
                i++;
            }
            else
            {
                sum += mp[s[i]];
            }
        }

        // cout << sum << endl;
        if(mp[s[ss-1]] <= mp[s[ss-2]]) sum += mp[s[ss-1]];

        return sum;
    }
};