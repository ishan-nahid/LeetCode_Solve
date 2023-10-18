class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx, mn;

        int sz_price = prices.size();

        mn = prices[0];
        mx = prices[0];
        int diff = abs(mx-mn);
        for(int i = 1; i < sz_price; i++)
        {
            // cout << mn << " " << mx << endl;
            if(prices[i] < mn)
            {
                mn = prices[i];
                mx = prices[i];
            }
            else if(prices[i] > mn && prices[i] > mx)
            {
                mx = prices[i];
            }
            diff = max(abs(mx-mn), diff);
        }

        // cout << mn << " " << mx << endl;
        return diff;
    }
};