#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        if (nums.size() < 3) return vector<vector<int>> (0);
        sort(nums.begin(), nums.end());
        vector<vector<int>> result(0);

        for (int i = 0; i < nums.size(); ++i) {
            if (((i - 1) >= 0) && (nums[i] == nums[i - 1])) continue;
            int start = i + 1;
            int end = nums.size() - 1;
            int target = -nums[i];
            int last[3] = {0, 0, 0};
            while (start < end)
                if (nums[start] + nums[end] < target) start++;
                else if (nums[start] + nums[end] > target) end--;
                else {
                     vector<int> temp(3, 0);
                     temp[0] = nums[i];
                     temp[1] = nums[start];
                     temp[2] = nums[end];
                     result.push_back(temp);
                     while (start < end && nums[start] == temp[1]) start++;
                     if (start >= end) break;
                }
        }
        return result;
    }
}
