class Solution {
public:
    int lengthOfLastWord(string s) {
        int ss = s.size();

        int c = 0;

        for(int i = ss-1; i >= 0; i--)
        {
            if(c > 0 && s[i] == ' ')
            {
                break;
            }
            else if(s[i] != ' ')
            {
                c++;
            }
        }

        return c;
    }
};