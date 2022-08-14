class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
    std::vector<std::string> result;
        int number = 1;
        for (int i = 0; i < target.size(); ++i)
        {
            if (target[i] == number)
            {
                result.push_back("Push");
                ++number;
            }
            else
            {
                result.push_back("Push");
                result.push_back("Pop");
                ++number;
                --i;
            }
        }
        return result;
    }
};
