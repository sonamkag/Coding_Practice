/*
Given a positive integer n and a string s consisting only of letters D or I, you have to find any permutation of first n positive 
integer that satisfy the given input string. D means the next number is smaller, while I means the next number is greater.

Note: The length of given string s will always equal to n - 1 and your solution should run in linear time and space.

Example :
Input: n=3, s=ID
Return: [1, 3, 2]
*/

vector<int> Solution::findPerm(const string A, int B) {
    int I=0,var1=0,var2=0;
    vector<int> V;
    for(int i=0;A[i]!='\0';i++)
        if(A[i]=='I')
            I++;
            
    var1=B-I;
    var2=var1-1;
    V.push_back(var1);
    for(int i=0;A[i]!='\0';i++){
        if(A[i]=='I'){
            var1++;
            V.push_back(var1);
        }
        else{
            V.push_back(var2);
            var2--;
        }
    }
    return V;
}
