class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        if(target > nums[nums.size()-1])
            return nums.size();
        int flag = 0;
        for(int i = 0 ; i < nums.size() ; ++i)
        {
            if(nums[i] >= target)
            {
                flag = i;
                break;
            }
        }
        return flag;
    }
};
