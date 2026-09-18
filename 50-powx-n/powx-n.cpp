class Solution {
public:
    double myPow(double x, int n) {
        //double ans = pow(x,n);
        //return ans;
        double ans = 1;
        long bF= n;
        if (bF<0){
            x = 1/x;
            bF = -bF;
        }

        while (bF>0){
            if (bF % 2 ==1){
                ans = ans *x;
            }
            x = x*x;
            bF = bF/2;
        }
        return ans;
    }
};