class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sz = digits.size();
        
        if(digits[sz-1] < 9)
        {
            digits[sz-1] = digits[sz-1]+1;
            return digits;
        }
        
        // return digits;
        vector <int> dig;

        bool flag = false;
        for(int i = sz-1; i >= 0; i--)
        {
            if(digits[i] == 9 && flag == false)
            {
                dig.push_back(0);
            }
            else if(digits[i] < 9 && flag == false)
            {
                dig.push_back(digits[i]+1);
                flag = true;
            }
            else
            {
                dig.push_back(digits[i]);
            }
        }

        if(flag == false) dig.push_back(1);
        
        reverse(dig.begin(), dig.end());
        return dig;

    }
};