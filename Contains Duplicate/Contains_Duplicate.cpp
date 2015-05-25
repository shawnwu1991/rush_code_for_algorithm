#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
    public:
    bool containsDuplicate(vector<int>& nums) {
    	if (nums.empty()) return false;

	unordered_map<int, int> hmap;
	vector<int>::iterator iter = nums.begin();

	while (iter != nums.end()) {
	    if (nums.find(*iter) == nums.end()) {
	    	hmap.insert(pair<int, int>(*iter, 1));
	    }else
	    	hmap[*iter] += 1;
	    iter++;
	}

	iter = nums.begin();

	while (iter != nums.end()) {
	    if (hmap[*iter] > 1)
	    	return true;
	    iter++;
	}

	return false;
    }
};
