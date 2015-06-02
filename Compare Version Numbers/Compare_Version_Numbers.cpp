#include <iostream>

using namespace std;

class Solution {
public:
    int compareVersion(string version1, string version2) {
    	if ((!version1) && (!version2)) return 0;
	if (!version1) version1 = "0.";
	if (!version2) version2 = "0.";
	if (string::npos == version1.find('.')) version1.push_back('.');
	if (string::npos == version2.find('.')) version2.push_back('.');

   	int result = stoi(version1.substr(0, version1.find('.'))) - 
		     stoi(version2.substr(0, version2.find('.')));
	if (result > 0) return -1;
	else if (result < 0) return 1;
	else return compareVersion(version1.substr(version1.find('.'), version1.end()), version2.substr(version2.find('.'), version2.end()));
    }
};
