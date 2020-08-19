class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
        int cnt ;
        
        cnt = 0 ;
        for (int i = 0 ; i < 32 ; i++)
            if (n >> i & 1)
                cnt++ ;
        
        return cnt ;
        
    }
};
