#include <cmath>
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        long long sum=0;
        bitset<32> bs(n);
        bitset<32> bsnew(n);
        for(int i=0;i<32;i++){
            if(bs[31-i]==1)
            bsnew[i]=1;
            else bsnew[i]=0;
        }
        for(int i=0;i<32;i++){
            if(bsnew[i]==1)
            sum+=pow(2,i);
        }
        return sum;
    }
};
