class Solution
{
public:
    string removeDuplicates(string s)
    {
        // intialise ans string as empty str
        string ans = "";
        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            char currcharacter = s[i];
            if (ans.empty())
            {
                // if ans is empty,,seedha push karo
                ans.push_back(currcharacter);
            }
            // rightmost character of ans=ans.back()
            else if (currcharacter == ans.back())
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(currcharacter);
            }
        }

        return ans;
    }
};