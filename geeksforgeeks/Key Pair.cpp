#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int A[100000],t,x,n;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    scanf("%d %d",&n, &x);
	    for(int j=0;j<n;j++)
	        scanf("%d",&A[j]);
	    
	   unordered_set<int> s; //unordered_set uses hash_map which takes O(1) time(O(n) in worst case) for 
	                        //unordered_set operations and O(logn) time for ordered_set operations.
	   int isPair=0;
	   for(int l=0;l<n;l++){
	       int tmp=x-A[l];
	       if(s.find(tmp)!=s.end()) isPair=1;
	       s.insert(A[l]);
	   }
	   
	   
	   if(isPair==1) printf("Yes \n");
	   else printf("No \n");
	}
	return 0;
}
