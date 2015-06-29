#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0, result = 0;
        unordered_map<char, int> hashT;
        for (int i = 0; i < 26; ++i)
            hashT['a' + i] = 0;

        for (int i = 0; i < s.length(); ++i) {
            if (!hashT[s[i]]) {len++; continue; }
            else result = max(len, result);
        }
        return result;
    }
};
