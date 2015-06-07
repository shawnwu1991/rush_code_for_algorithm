#include <iostream>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (0 == nums.size() || 1 == nums.size()) return ;
        int temp;
        reverse(nums.begin(), nums.end());
        for (size_t i = 0; i < k; ++i) {
            temp = nums.begin();
            nums.push_back(temp;
            nums.erase(nums.begin());
        }
        reverse(nums.begin(), nums.end());
    }
};
