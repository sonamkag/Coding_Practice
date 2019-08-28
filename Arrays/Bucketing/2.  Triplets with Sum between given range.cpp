int Solution::solve(vector<string> &A) {
    vector<float> rA,rB,rC;
    //vector<float> smallestA(2), largestA(3), smallestB(2);
    //float smallestC;
    for(int i=0;i<A.size();i++){
        if(stof(A[i])<=0.0||stof(A[i])>=2.0) continue;
        if(stof(A[i])>0.0&&stof(A[i])<2.0/3) rA.push_back(stof(A[i]));
        if(stof(A[i])>=2.0/3&&stof(A[i])<=1.0) rB.push_back(stof(A[i]));
        if(stof(A[i])>1.0&&stof(A[i])<2.0) rC.push_back(stof(A[i]));
    }
    int nA=rA.size(), nB=rB.size(), nC=rC.size();
    if(nA+nB+nC<3) return 0;
    sort(rA.begin(),rA.end());
    sort(rB.begin(),rB.end());
    sort(rC.begin(),rC.end());
    
    //cout << "A ";
    //for(int i=0;i<nA;i++) cout << rA[i] << " ";
    //cout << endl;
    //cout << "B ";
    //for(int i=0;i<nB;i++) cout << rB[i] << " ";
    //cout << endl;
    //cout << "C ";
    //for(int i=0;i<nC;i++) cout << rC[i] << " ";
    //cout << endl;
    
    //case1 A A A
    if(nA>=3){
        //cout << "case1 " << endl;
        float s=rA[nA-1]+rA[nA-2]+rA[nA-3];
        if(s>1.0) return 1;
    }
    
    //case2 A A B
    if(nA>=2&&nB>=1){
        //cout << "case 2 " << endl;
        float s=rA[nA-1]+rA[nA-2];
        //cout << s << endl;
        for(int i=0;i<nB;i++){
            if(rB[i]>1.0-s&&rB[i]<2.0-s) return 1;
            else continue;
        }
    }
    
    //case3 A A C
    if(nA>=2&&nC>=1){
        //cout << "case3 " << endl;
        float s=rA[0]+rA[1]+rC[0];
        if(s>1.0&&s<2.0) return 1;
    }
    
    //case4 A B B
    if(nA>=1&&nB>=2){
        //cout << "case4 " << endl;
        float s=rB[nB-1]+rB[nB-2];
        for(int i=0;i<nA;i++){
            if(rA[i]<2.0-s) return 1;
            else continue;
        }
    }
    
    //case5 A B C
    if(nA>=1&&nB>=1&&nC>=1){
        //cout << "case5 " << endl;
        float s=rA[0]+rB[0]+rC[0];
        if(s>1.0&&s<2.0) return 1;
    }
    return 0;
}
