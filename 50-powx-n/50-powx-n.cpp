class Solution {
public:
    bool flag=true;
    double myPow(double x, int n) {
        if(n<0){
            flag=false;
        }
        if(flag){
        if(n==0){
            return 1;
        }
        if(n%2==0){
            return myPow(x*x,n/2);
        }
        else{
            return x*myPow(x*x,(n-1)/2);
        }
        }
        else{
            if(n==0){
                return 1;
            }
            if(n%2==0){
            return myPow(x*x,n/2);
        }
        else{
            return (1/x)*myPow(x*x,(n+1)/2);
        }
        }
    }
};