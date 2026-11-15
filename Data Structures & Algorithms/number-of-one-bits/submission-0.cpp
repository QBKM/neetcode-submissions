class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t nb = 0;

        for(int i=0; i<32; i++)
        {
            nb += (n && n&1<<i);
        }
        return nb;
    }
};
