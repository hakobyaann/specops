class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> result;
        for (int i = 0; i < nums1.size(); ++i)
        {
            for (int j = 0;  j < nums2.size(); ++j)
            {
                if (nums1[i] == nums2[j])
                {
                    result.push_back(nums1[i]);
                    break;
                }
            }
        }
        for (int i = 0; i < result.size(); ++i)
        {
            for (int j = 0; j < result.size(); ++j)
            {
                if (result[i] == result[j] && i != j)
                {
                    result.erase(result.begin() + j);
                }
            }
        }
        return result;
    }
};
