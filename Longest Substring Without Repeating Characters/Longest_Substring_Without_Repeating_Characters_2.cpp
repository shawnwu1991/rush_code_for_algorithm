#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mapping(256, -1);
        int result = 0, flag = 0;

        for (int i = 0; i < s.length(); ++i) {
            flag = max(mapping[s[i]] + 1, flag);
            mapping[s[i]] = i;
            result = max(result, i - flag + 1);
        }

        return result;
    }
};
