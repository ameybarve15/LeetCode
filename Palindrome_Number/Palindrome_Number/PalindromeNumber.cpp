/* Determine whether an integer is a palindrome. Do this without extra space.

Some hints:
Could negative integers be palindromes? (ie, -1)

If you are thinking of converting the integer to string, note the restriction of using extra space.

You could also try reversing an integer. However, if you have solved the problem "Reverse Integer", 
you know that the reversed integer might overflow. How would you handle such case?

There is a more generic way of solving this problem. */

#include <limits>
class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0) return false;
		int number = x;
		long long reverse = 0;

		while(x != 0)
		{
			int remainder = x % 10;
			reverse = reverse * 10 + remainder;
			if (reverse  > INT_MAX || reverse < INT_MIN) return 0;
			x = x / 10;
		}
		return (reverse == number);
	}
};