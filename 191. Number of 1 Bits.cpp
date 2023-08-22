// 191. Number of 1 Bits


class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int count = 0;  
        while(n!=0) // when every bit of n will become 0 then n will become 0 too and while loop will end
        {
            // 1 = 000000000001 so of last bit of n is 1 then n&1 will give 1 and if last bit of n is 0 then n&0 will give 0. 
            if(n&1){
                count++;
            }
            // right shift n by 1 bit to get the next bit in n 
            n = n>>1;
        }
        return count;
    }
};