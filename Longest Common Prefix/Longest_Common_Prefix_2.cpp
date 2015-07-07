#include <iostream>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (!strs.size()) return "";
        string result = "";
        int range = INT_MAX;
        for (auto& s:strs) range = (range > s.length())? s.length() : range;
        for (int i = 0; i < range; ++i) {
            bool flag = true;
            for (auto& s:strs)
                if (s[i] != strs[0][i]) {flag = false; break; }
            if (!flag) return result;
            result += strs[0][i];
        }
        return result;
    }
}
