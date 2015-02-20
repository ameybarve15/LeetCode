/*Given an unsorted array, find the maximum difference between the successive elements in its sorted form.

Try to solve it in linear time/space.

Return 0 if the array contains less than 2 elements.

You may assume all elements in the array are non-negative integers and fit in the 32-bit signed integer range
*/
#include <vector>
using namespace std;

class Solution {
public:
    int maximumGap(vector<int> &num) {
      int maxGap = 0;
      if (num.size() < 2) return 0;
	  sort(num.begin(), num.end());
	  for (int i=0; i<num.size()-1; i++) {
		if (num.at(i+1) - num.at(i) > maxGap) {
			maxGap = num.at(i+1) - num.at(i);
		}
	  }
	  return maxGap;  
    }
};