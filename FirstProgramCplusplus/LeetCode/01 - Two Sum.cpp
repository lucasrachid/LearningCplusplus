#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        if (nums.empty())
        {
            return {};
        }

        int numSize = static_cast<int>(nums.size());

        for (int i = 0; i < numSize; i++)
        {
            for (int j = i + 1; j < numSize; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }

        return {};
    }
};

main()
{
    Solution solution;
    vector<int> nums = {15, 7, 11, 2};
    int target = 9;

    vector<int> result = solution.twoSum(nums, target);

    string resultString = "[";

    int resultSize = static_cast<int>(result.size());
    for (int i = 0; i < resultSize; i++)
    {
        resultString += to_string(result[i]);
        if (i < resultSize - 1)
        {
            resultString += ", ";
        }
    }

    resultString += "]";

    cout << "result " << resultString << endl;
}