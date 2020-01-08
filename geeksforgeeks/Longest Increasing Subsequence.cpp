#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int longIncSeq(int A[],int n){
    int LIS[n];
    LIS[0]=1;
    for(int i=1;i<n;i++){
		LIS[i]=1;
    	for(int j=0;j<i;j++){
    		if(A[i]>A[j] && LIS[i]<LIS[j]+1)
    			LIS[i]=LIS[j]+1;
    	}
    }
    return *max_element(LIS,LIS+n);
}

int main() {
	int A[1000],t,n;
	scanf("%d",&t);
	for(int j=0;j<t;j++){
	    scanf("%d",&n);
	    for(int i=0;i<n;i++)
	        scanf("%d",&A[i]);
	   printf("%d \n", longIncSeq(A,n));
	}
	return 0;
}
