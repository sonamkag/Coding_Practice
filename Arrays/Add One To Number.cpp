vector<int> Solution::plusOne(vector<int> &A) {
     int n = A.size();
    //cout << n <<endl;
    int B[n+1];
    int flag = 0;
    int carry = 1;
    for(int i=n-1; i>=0; i--){
        if(i == 0 && carry != 0){
            B[abs(i-n+1)] = (A[i]+ carry)%10;
            carry = (A[i]+ carry)/10;
            B[abs(i-n+1) + 1] = carry;
            if(carry != 0)
                flag =1;
        }
        
        else {
            B[abs(i-n+1)] = (A[i]+ carry)%10;
            carry = (A[i]+ carry)/10;
        }
       //cout<< B[abs(i-n+1)] << " " << carry << endl;
    }
    
    for(int i=0;i<n+1; i++){
            //cout<< B[i] << endl;
        }
    
    A.clear();
    int x = 0;
    if (flag == 0){
        for(int i=n-1;i>=0; i--){
            if(B[i] == 0 && x == 0){
                continue;
            }
            A.push_back(B[i]);
            x =1;
        }
    }
    
    else{
        for(int i=n;i>=0; i--){
           if(B[i] == 0 && x == 0){
                continue;
            }
            A.push_back(B[i]);
            x =1;
        }
    }
    return A;
}
