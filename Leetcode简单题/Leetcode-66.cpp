class Solution 
{
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int index = digits.size() - 1;
        digits[index] += 1;
        check(digits , index , false);
        return digits;
    }
    int check(vector<int> &vec , int n , bool YorN)
    {
        if( YorN && n < 0 )
        {
            list<int> lis(vec.begin() , vec.end());
            lis.push_front(1);
            list<int>::iterator liter = lis.begin();
            vec.resize(vec.size() + 1);
            for(int i = 0 ; liter != lis.end() ; ++i , ++liter)
            {
                vec[i] = *liter;
            }
            return 1;
        }    
        else if( !YorN && n < 0 )
        {
            return 0;
        }
        if(YorN)
        {
            vec[n] += 1;
            YorN = false;
        }
        if(vec[n] <= 9)
        {
            return 0;
        }
        else if(vec[n] > 9)
        {
            vec[n] = 0;
            YorN = true;
            check(vec , n-1 , YorN);
        }
        
        return 1;
    }
};
