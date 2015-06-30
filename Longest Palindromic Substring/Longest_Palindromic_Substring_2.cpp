#include <iostream>

using namespace std;

class Solution {
public:
    longestPalindrome(string s) {
        if (s.length() < 2) return s;
        map<int , int> mapping;

        for (int i = 0; i < s.length(); ) {
            int start = i;
            while (s[start] == s[i + 1]) ++i;
            int finish = i;
            while (start >= 0 && finish < s.length() && s[start] == s[finish]) {
                 --start;
                 ++finish;
            }
            if ((finish - start) >= 3) mapping.insert(make_pair(finish - start - 1, start + 1));
            ++i;
        }

        auto m = max_element(mapping.begin(), result.end());
        return s.substr((*m).second, (*m).first);
    }
};
