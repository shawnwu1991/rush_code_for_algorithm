#include <iostream>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
    	if (!s.length()) return true;

        int len = s.length();
        char sMap[256];
        char tMap[256];
        memset(sMap, 0, (sizeof(char) * 256));
        memset(tMap, 0, (sizeof(char) * 256));

        for (int i = 0; i < len; ++i) {
             if (!sMap[s[i]]) sMap[s[i]] = t[i];
             else if (sMap[s[i]] != t[i]) return false;
             else ;

             if (!tMap[t[i]]) tMap[t[i]] = s[i];
             else if (tMap[t[i]] != s[i]) return false;
             else ;
        }
        return true;
    }
};
