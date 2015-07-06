#include <iostream>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = strs[0];
        vector<string>::iterator iter = strs.begin();
        while (iter != str.end()) {
            int len1 = result.length(), len2 = *iter.length(), i = 0;
            while (!len1 && !len2) {
                if (result[i] == *iter[i]) {len1--; len2--; continue; }
                else break;
            }
            if (!result.length()) return "";
            iter++;
        }
        return result;
    }
};
