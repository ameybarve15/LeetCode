/*Given an array and a value, remove all instances of that value in place and return the new length.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.
*/

class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        int i =0;
    	int j =0;
    
    	while (i < n)
    	{
    		if (A[i] != elem) //This is like don't put the element elem inside new array instead of actually removing elem.
    		{
    			A[j] = A[i];
    			j++;
    		}
    		i++;
    	}
    	return j;    
    }
};