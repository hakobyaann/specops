class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
    int first = 0;
    int last = nums.size() - 1;
        while (first < last)
        {
            if (nums[first] % 2)
            {
                int tmp = nums[first];
                nums[first] = nums[last];
                nums[last] = tmp;
                last--;
            } else {
        
                ++first;
            }
        }
        return nums;
    }
 
};
