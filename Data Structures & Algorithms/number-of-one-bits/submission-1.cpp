class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t nb = 0;

        for(int i=0; i<32; i++)
        {
            nb += (1<<i & n) ? 1:0;
        }
        return nb;
    }
};
