string Solution::convert(string A, int B) {
    vector<string> V(B);
    int m=0,dir=1;
    if(B==1) return A;
    for(int i=0;i<A.length();i++){
        V[m]+=A[i];
        if(dir==1){
            m++;
            if(m==B){ m-=2; dir*=-1; }
        }
        else{
            m--;
            if(m==-1){ m=1; dir*=-1; }
        }
    }
    string S;
    for(int i=0;i<B;i++) S+=V[i];
    return S;
}

