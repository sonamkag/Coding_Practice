vector<string> Solution::prettyJSON(string A) {
    int tbctr=0,i=0,j;
    vector<string>ans;
    bool flag=false;
    while(i<A.size()){
        string row="";
        for(j=0;j<tbctr;j++) row+='\t';
        flag=false;
        for(j=i;j<A.size();j++){
            if(A[j]=='['||A[j]=='{'){
                if(flag) ans.push_back(row);
                row="";
                for(int k=0;k<tbctr;k++) row+='\t';
                row+=A[j];
                ans.push_back(row);
                i=j+1;
                tbctr++;
                break;
            }
            if(A[j] == ']' || A[j] == '}'){
                tbctr--;
                if(flag) ans.push_back(row);
                row="";
                for(int k=0;k<tbctr;k++) row+='\t';
                row+=A[j];
                if(j+1<A.size()&&A[j+1]==',') row+=A[++j];
                ans.push_back(row);
                i=j+1;
                break;
            }
            row+=A[j];
            flag=true;
            i=j+1;
            if(A[j]==','){
                if(flag) ans.push_back(row);
                i=j+1;
                break;
            }
        }
    }
    return ans;
}

