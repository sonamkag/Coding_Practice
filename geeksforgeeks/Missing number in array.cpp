#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	scanf("%d",&t);
	for(int j=0;j<t;j++){
	    scanf("%d",&n);
	    long long int totalsum=(n*(n+1))/2; //totalsum is sum of n numbers
	    long long int sum=0;
	    for(int i=0;i<n-1;i++){
	    	int tmp;
	    	scanf("%d",&tmp);
	    	sum+=tmp;
	    }
	    printf("%lld \n",totalsum-sum);    
	   
	  /* for(int i=0;i<n-1;i++)
	        printf("%d \t",A[i]);
	   printf("\n"); */
	}
	return 0;
}
