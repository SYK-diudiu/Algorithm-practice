class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if(!strs.size())
            return "";
        string prefix = strs[0];
        int count = strs.size();
        for(int i = 0 ; i < count ; i++)
        {
            prefix = compare_str(prefix , strs[i]);
            if(!prefix.size())
                return "";
        }
        return prefix;
    }

    string compare_str(const string& str1 , const string& str2)
    {
        int index = 0;
        int length = min(str1.size() , str2.size());
        while(index < length && str1[index] == str2[index])
        {
            index++;
        }
        return str1.substr(0 , index);
    }
};
