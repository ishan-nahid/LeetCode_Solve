class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        vector <char> v;

        v.push_back('.');

        int s_size = s.size();

        for(int i = 0; i < s_size; i++)
        {
            if(s[i] != '-') v.push_back(s[i]);
        }

        string rs = "";

        int v_size = v.size();

        int j = 1;
        for(int i = v_size-1; i >= 1; i--)
        {
            if(v[i] >= 97 && v[i] <= 122) v[i] -= 32;

            rs += v[i];
            if(j == k && i != 1)
            {
                rs += '-';
                j = 1;
            }
            else j++;

            
        }

        string ss = "";

        int rs_size = rs.size();

        for(int i = rs_size-1; i >= 0; i--)
        {
            ss += rs[i];
        }
        return ss;
    }
};