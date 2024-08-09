class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int read = 0;
        int write = 0;
        int size = nums.size();
        for(read = 0 ; read < size ; ++read)
        {
            if(nums[read] != val)
            {
                nums[write] = nums[read];
                write++;
            }
        }
        return write;
    }
};
