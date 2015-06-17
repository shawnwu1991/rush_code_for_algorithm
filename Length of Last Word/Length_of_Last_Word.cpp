#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        if (!s.length()) return 0;

        int bLen = 0;
        int lLag = 0;
        reverse(s.begin(), s.end());
        string::iterator iter = s.begin();
        while (iter != s.end()) {
            if ((*iter != ' ') && (bLen <= 1)) {
                 bLen++;
                 llen++;
            }
            else if ((*iter == ' ') && (bLen <= 1)) iter++;
            else if ((*iter == ' ') && (bLen == 1)) return lLen;
            else ;
        }
        return 0;
    }
};
