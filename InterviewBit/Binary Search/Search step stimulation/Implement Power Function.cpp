long long int power(int x, int y, int m){
    long long int temp;
    if(x==0 && y==0) return 1%m;
    if(y==0) return 1%m;
    temp=power(x, y / 2, m);
    if (y%2==0){
        if((temp*temp)<0) return m-abs(temp*temp)%m;
        else return (temp*temp)%m;
    }
    else{
        if(y>0){
            if(((x*temp%m)*temp)<0) return m-abs((x*temp%m)*temp)%m; 
            else return ((x*temp%m)*temp)%m;
        }
        else{
            if(((temp*temp%m)*power(x,m-2,m))<0) return m-abs((temp*temp%m)*power(x,m-2,m))%m; 
            else return ((temp*temp*m)*power(x,m-2,m))%m;
        }
    }
} 

int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long int B=power(x,n,d);
    B %=d;
    //if(ans<0) ans = d-(abs(ans)%d);
    return B;
}

