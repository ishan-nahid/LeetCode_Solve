class Solution {
public:
    bool isPalindrome(string s) {
        string s2 = "";

        int sz_s = s.size();

        for(int i = 0; i < sz_s; i++)
        {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
            {
                s2 += s[i];
            }
            else if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s2 += (s[i] + 32);
            }
            
        }
        cout << s2 << endl;

        if(s2.size() <= 0) return true;

        int i = 0, j = s2.size()-1;

        while(i <= j)
        {
            if(s2[i] != s2[j])
            {
                return false;
            }
            i++;
            j--;
        }

        return true;

    }
};