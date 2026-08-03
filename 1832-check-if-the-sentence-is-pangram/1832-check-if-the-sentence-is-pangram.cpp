class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        int mask=0;
        for(char ch: sentence)
        {
            mask |= (1<<(ch-'a'));
        }

        return mask==(1<<26)-1;
    }
};

/*bool checkIfPangram(string sen) {
        unordered_set<char> st;

        for( auto it: sen)
        {
            st.insert(it);
        }
        return st.size()==26;
    }
-----------------------------
bool checkIfPangram(string sen) {
        bool sean[26] = {false};

        for (int i = 0; i < sen.length(); i++) {
            sean[sen[i] - 'a'] = true;
        }
        for (int i = 0; i < 26; i++) {
            if (!sean[i])
                return false;
        }
        return true;
    }
------------------------------------ 
bool checkIfPangram(string sen) {
        for (char ch = 'a'; ch <= 'z'; ch++) {

            bool found = false;

            for (char it : sen) {
                if (ch == it) {
                    found = true;
                    break;
                }
            }
            if (found != true) {
                return false;
            }
        }
        return true;
    }*/