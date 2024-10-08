class Solution 
{
public:
    int strStr(string haystack, string needle) 
    {
        int n = haystack.size();
        int size = needle.size();
        if(size > n)
            return -1;
        for(int i = 0 ; i < n-size+1 ; i++)
        {
            if(haystack.substr(i , size) == needle)
                return i;
        }
        return -1;
    }
};
