#include <iostream>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        if (!s.length()) return 0;
        int result = 0;
        unordered_map<char, int> map;
        map['i'] = 1;
        map['I'] = 1;
        map['v'] = 5;
        map['V'] = 5;
        map['x'] = 10;
        map['X'] = 10;
        map['l'] = 50;
        map['L'] = 50;
        map['c'] = 100;
        map['C'] = 100;
        map['d'] = 500;
        map['D'] = 500;
        map['m'] = 1000;
        map['M'] = 1000;
        for (int i = s.length() - 1; i >= 0; --i) {
            if (!i) return map[s[i]];
            result = map[s[i]] < map[s[i - 1]] ? (result - map[s[i]]): (result + map[s[i]]);
        }
        return result;
    }
};
