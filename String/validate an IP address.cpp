class Solution
{
public:
    int isValid(string s)
    {
        set<string> se;
        for (int i = 0; i < 256; i++)
        {
            se.insert(to_string(i));
        }
        int dot = 0;
        string temp = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '.')
            {
                dot++;
                if (se.find(temp) == se.end())
                    return false;
                else
                {
                    temp = "";
                }
            }
            else
            {
                temp.push_back(s[i]);
            }
        }
        if (se.find(temp) == se.end() || dot < 3 || dot > 3)
            return false;
        return true;
    }
};