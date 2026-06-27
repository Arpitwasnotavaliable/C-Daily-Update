class Solution {
public:
    int bitwiseComplement(int n) {

        int m=n;
        int mask=0;
        if(n==0)
        return 1;
        while(m!=0){
            mask=(mask<<1)|1;
            m=m>>1;
        }
        int ans =(~n)&mask;
        return ans;        
    }
};


class Solution {
public:
    bool isPowerOfTwo(int n) {

        int ans=1;
        
        for(int i=0;i<=30;i++){

            if(ans==n){
            return true;
            }
            if(ans<INT_MAX/2)
            ans=ans*2;
        }
        return false;

    }
};