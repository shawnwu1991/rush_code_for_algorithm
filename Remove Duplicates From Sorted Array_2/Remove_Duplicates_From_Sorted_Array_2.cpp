#include <iostream>

using namespace std;

class Solution
{
    public:
    	int removeDuplicates(int Arr[], int n)
	{
	    if (n <= 2) 
	    	return n;
	    
	    int index = 2;

	    for (int i = 2; i < n; ++i)
	    {
	    	if (Arr[index - 2] != Arr[i])
		{
		    index += 1;
		    Arr[index] = Arr[i];
		}
	    }

	    return index;
	}
}
