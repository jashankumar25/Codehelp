class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int profit=0;

        for(int i=1;i<prices.size();i++)
        {
            mini=min(mini,prices[i]);
            profit=max(profit,prices[i]-mini);
        }
        return profit;
    }
};
/*------------------------------------------
int maxProfit(vector<int>& prices) {

        int curr = 0;
        int ans = 0;

        for(int i=1;i<prices.size();i++)
        {
            curr += prices[i]-prices[i-1];

            if(curr<0)
                curr=0;

            ans=max(ans,curr);
        }

        return ans;
    }
 --------------------------------------------------------      
 int maxProfit(vector<int>& prices) {

        int ans = 0;

        for(int i=0;i<prices.size();i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {
                ans=max(ans,prices[j]-prices[i]);
            }
        }

        return ans;
    }

*/
