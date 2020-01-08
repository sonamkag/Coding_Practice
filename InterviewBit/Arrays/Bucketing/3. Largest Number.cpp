/*
Given a list of non negative integers, arrange them such that they form the largest number.

Example:
Given [3, 30, 34, 5, 9], the largest formed number is 9534330.
Note: The result may be very large, so you need to return a string instead of an integer.
*/

int stcompare(string a, string b){
    string ab=a.append(b);
    string ba=b.append(a);
    return ab.compare(ba)>0 ? 1:0;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<string> B;
    string ans="";
    for(int i=0;i<A.size();i++)
        B.push_back(to_string(A[i]));
    sort(B.begin(),B.end(),stcompare);
    
    for(int i=0;i<A.size();i++) ans.append(B[i]);
    int i=0;
    while(ans[i]=='0') i++;
    if(i==ans.length()) ans="0";
    return ans;
}
