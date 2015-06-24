#include <iostream>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (1 == numRows || (!s.length()) || (s.length() <= numRows)) return s;
        string result;
        int offsetLen = 2 * numRows - 2;

        for (int i = 0; i < numRows; ++i)
            if ((!i) || (numRows - 1) == i)
                for (int j = i; j < s.length(); j += offsetLen) result.push_back(s[j]);
            else {
                 int temp = 2 * i;
                 for (int j = i; j < s.length(); temp = offsetLen - temp, j += temp) result.push_back(s[j]);
            }
        return result;
    }
};
