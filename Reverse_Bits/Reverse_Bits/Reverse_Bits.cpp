/*Reverse bits of a given 32 bits unsigned integer.

For example, given input 43261596 (represented in binary as 00000010100101000001111010011100), 
return 964176192 (represented in binary as 00111001011110000010100101000000).

*/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t reverse_num = n;
        int count = sizeof(n) * 8 - 1;
        
        n >>= 1;
        while (n)
        {
            reverse_num <<= 1;
            reverse_num |= n & 1;
            count--;
            n >>= 1;
        }
        reverse_num <<= count;
        return reverse_num;
    }
};