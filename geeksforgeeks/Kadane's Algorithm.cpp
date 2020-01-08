#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int maxArr(int A[],int n){
    int globalmax=-100000000,localmax=-100000000;
    for(int i=0;i<n;i++){
        localmax=max(A[i],localmax+A[i]);
        globalmax=max(globalmax,localmax);
        //printf("%d \t %d \n",localmax,globalmax);
    }
    //printf("%d \t %d \n",localSum,maxSum);
    return globalmax;
}

int main() {
	int A[1000000],t,n;
	scanf("%d",&t);
	for(int j=0;j<t;j++){
	    scanf("%d",&n);
	    for(int i=0;i<n;i++)
	        scanf("%d",&A[i]);
	    /*for(int i=0;i<n;i++)
	        printf("%d \t",A[i]);
	    printf("\n");*/
	   printf("%d \n", maxArr(A,n));
	}
	return 0;
}
