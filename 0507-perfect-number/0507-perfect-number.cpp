class Solution {
public:
    bool checkPerfectNumber(int num) {
        if( num == 1) return false;
        
        int s = 0;

        int sqr_num = sqrt(num);

        for(int i = 1; i <= sqr_num; i++)
        {
            // cout << s << endl;
            if(num%i == 0)
            {
                s += i;
                // cout << i << " " << num/i << endl;

                if(num != i && (num/i) != num)
                {
                    s += (num/i);
                }
            }
        }

        // cout << s << endl;
        return (s == num);
    }
};