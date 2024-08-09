class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        if(size == 0)
        {
            return 0;
        }
        int read = 1;
        int write = 1;
        while(read < size)
        {
            if(nums[read] != nums[read - 1])
            {
                nums[write] = nums[read];
                write++;
            }
            read++;
        }
        return write;
    }
};
