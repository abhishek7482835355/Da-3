//program with a function to calculate the square root of very large numbers without using the builtin function of the maht library of c langugae
class Solution {
public:
    int mySqrt(int x) {
        long int ans=1;
        while(1){
            if ((ans*ans)>x){
                return ans-1;
                break;
            }
            ans+=1;
        }       
    }
};
