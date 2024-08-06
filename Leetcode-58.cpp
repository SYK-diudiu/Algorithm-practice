class Solution 
{
public:
    int lengthOfLastWord(string s) 
    {
        bool conditon = false; //false暂时表示没找到或者没找全最后一个单词
        int size = 0;
        for(int i = s.length()-1 ; i >= 0 ; )
        {
            if(s[i] == ' ' && !conditon)
            {
                --i;
            }
            else if(s[i] != ' ')
            {
                ++size;
                --i;
                conditon = true;
            }
            else if(s[i] == ' ' && conditon)
            {
                break;
            }
        }
        return size;
    }
};
