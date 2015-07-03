#include <iostream>

using namespace std;

class Solution {
public:
    int romanToInteger(string s) {
        unordered_map<char, int> map{{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};
        int result = 0;
        for (int i = 0; i < s.length(); ++i)
            if (i > 0 && map[s[i]] > map[s[i - 1]]) result += map[s[i]] - 2 * map[s[i - 1]];
            else result += map[s[i]];
        return result;
    }
};
