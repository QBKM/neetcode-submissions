class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t nb = 0;

        while(n != 0)
        {
            nb += (n&1) ? 1:0;
            n>>=1;
        }
        return nb;
    }
};
