
/*
You are in an infinite 2D grid where you can move in any of the 8 directions :
    (x,y) to 
    (x+1, y), 
    (x-1, y), 
    (x, y+1), 
    (x, y-1), 
    (x-1, y-1), 
    (x+1,y+1), 
    (x-1,y+1), 
    (x+1,y-1) 
You are given a sequence of points and the order in which you need to cover the points. Give the minimum number of steps in which you can achieve it. You start from the first point.

Example :

Input : [(0, 0), (1, 1), (1, 2)]
Output : 2
It takes 1 step to move from (0, 0) to (1, 1). It takes one more step to move from (1, 1) to (1, 2).
*/
// Input : X and Y co-ordinates of the points in order. 
// Each point is represented by (X[i], Y[i])


int sPath(int x1, int x2, int y1, int y2) {
    int dx,dy,ans;
    dx=abs(x2-x1);
    dy=abs(y2-y1);
    ans=max(dx,dy);
    return ans;
}

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int d=0;
    for(int i=0;i<A.size()-1;i++)
        d += sPath(A[i],A[i+1],B[i],B[i+1]);
    return d;
}
