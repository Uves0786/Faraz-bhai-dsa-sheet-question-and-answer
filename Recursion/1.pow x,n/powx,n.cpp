//pow(x,n)
class Solution {
public:
    double myPow(double x, int n)
    {
        if(x==1 || n==0) return 1;
           // double temp=myPow(x,n/2);
           // if(n%2==1) return temp*temp*x;
        if(n<0)
        {
            n=abs(n);
            x=1/x;             
        }
        if(n%2==0)
        {
            return  myPow(x*x,n/2);
        }
        else
        {
             return  x*myPow(x*x,n/2);
        }
        
    }
};
