bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    vector<pair<int,int>> V;
    for (int i=0;i<arrive.size();i++) { 
        V.push_back(make_pair(arrive[i], 1)); 
        V.push_back(make_pair(depart[i], 0)); 
    }
    sort(V.begin(),V.end());
    int curr_active=0;
    for(int i=0;i<V.size();i++){
        if(V[i].second==1) curr_active++;
        if(V[i].second==0) curr_active--;
        if(curr_active>K) return false;
    }
    return true;
}
