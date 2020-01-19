vector<string> Solution::fullJustify(vector<string> &A, int B) {
    vector<string> res;
    int k=0,l=0;
    for(int i=0;i<A.size();i+=k){
        for(k=l=0;i+k<A.size()&&l+A[i+k].size()<=B-k;k++)
            l+=A[i+k].size();
        string tmp=A[i];
        for(int j=0;j<k-1;j++){
            if(i+k>=A.size()) tmp+=" ";
            else tmp+=string((B-l)/(k-1)+(j<(B-l)%(k-1)),' ');
            tmp+=A[i+j+1];
        }
        tmp+=string(B-tmp.size(),' ');
        res.push_back(tmp);
    }
    return res;
}

