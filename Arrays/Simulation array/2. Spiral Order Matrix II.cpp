vector<vector<int> > Solution::generateMatrix(int A) {
     int n=A,tmp=1,sRow=0,sCol=0,fRow=n,fCol=n; 
    vector<vector<int>> B(n,vector<int>(n));
    while(sRow<fRow && sCol<fCol){ 
        for(int i=sCol;i<fCol;++i){ B[sRow][i]=tmp; tmp++; }
        sRow++; 
  
        for(int i=sRow;i<fRow;++i){ B[i][fCol-1]=tmp; tmp++; }
        fCol--; 
  
        if(sRow<fRow){
            for(int i=fCol-1;i>=sCol;--i){ B[fRow-1][i]=tmp; tmp++; }
            fRow--; 
        } 
  
        if (sCol<fCol){
            for(int i=fRow-1;i>=sRow;--i){ B[i][sCol]=tmp; tmp++; }
            sCol++; 
        } 
        //cout << sRow << " " << fRow << " " << sCol << " " << fCol << " " << tmp << " " << endl;
    } 
    /*
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout << B[i][j] << " ";
        cout << endl;
    } 
    */
    return B;
}
