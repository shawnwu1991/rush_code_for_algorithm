#include <iostream>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    	if (2 > nums.size()) return false;

	bool result = false;
	for (size_t i = 0; i < nums.size() ; ++i) {
	    result = isNearbyDuplicate(nums, i, k);
	    if (result) return true;
	}
    	return result;
    }

    bool isNearbyDuplicate(vector<int>& nums, size_t i, int k) {
    	vector<int> temp;
	vector<int>::iterator it;
	temp.push_back(nums.at(i));
	nums.erase(i);
	
	it = find_end(nums.begin(), nums.end(), temp.begin(), temp.end());
	if (it != nums.end()) {
	    nums.erase(it);
	    it = find(nums.begin(), nums.end(), temp.at(0));
	    if (it != nums.end()) {
	    	
	    }else 
	    	return true;
	}else 
	    return false;
    }
};
