class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";

        int w1_size = word1.size(), w2_size = word2.size();

        int i = 0, j = 0;
        while(i < w1_size || j < w2_size)
        {
            if(i < w1_size)
            {
                result += word1[i];
                i++;
            }
            if(j < w2_size)
            {
                result += word2[j];
                j++;
            }
        }

        return result;
    }
};