#include <iostream>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows >= s.length() || numRows <= 1) return s;
        string result;
        for (int i = 1; i <= numRows; ++i) {
            result += convertOneRow(s, i, numRows);
        }
        return result;
    }

    string convertOneRow(string s, int row, int numRows) {
        string result;
        int j = 0;
        if (1 == row || numRows == row)
            for (int i = row - 1 + (2 * numRows - 2) * j; i < s.length(); ++j)
                result.push_back(s[i]);
        else {
             int temp = 0;
             for (int i = row - 1 + (2 * numRows - 2) * j + temp; i < s.length(); ++j) {
                 result.push_back(s[i]);
                 temp = 2 * numRows - 2 - temp;
             }
        }
    }
};
