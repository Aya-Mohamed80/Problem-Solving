class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        else 
        {
            string s = to_string(x);
            int j =s.size();
            for(int i=0;i<s.size()/2;i++)
                {
                    if (s[i] != s[j-1])
                        return false;
                    j--;
                }
            return true;
        }
    }
};