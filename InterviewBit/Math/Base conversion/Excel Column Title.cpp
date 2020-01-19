string Solution::convertToTitle(int A) {
    string s; int i=0;
    //cout << A << " " << A.size() << endl;
    while(A>0){
        if(A%26==0){ s.push_back('Z'); A=(A/26)-1; }
        else{ s.push_back((char)(A%26)+64); A=(A/26); }
        //cout << i << " " << s[i] << " " << n<< " " << endl;
        i++;
    }
    //s.shrink_to_fit();
    reverse(s.begin(), s.end());
    return s;
}

