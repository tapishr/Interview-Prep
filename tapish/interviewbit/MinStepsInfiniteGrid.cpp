//Problem link - https://www.interviewbit.com/problems/min-steps-in-infinite-grid/
// Input : X and Y co-ordinates of the points in order. 
// Each point is represented by (X[i], Y[i])

//1. Only take 2 points at a time and make the first point origin (0,0) and second point (x,y) by substracting first
//point from second.
//2. Assume that (x,y) lies in first quadrant (both a and y are positive) as all other cases are extensions of this case
//3. It can be proved that shortest path of going to any point (x,y) is simply going to the nearest point on diagonal
//from origin  and then going to (x,y)
//4. Closest point on diagonal to (x,y) will be (x,x) (if x < y) or (y,y) (if y < x). It will take min(x,y) steps to reach there.
//5. y-min(x,y) + x-min(x,y) will actually be y - x (if x < y) or x - y (if y < x) which would be the number of steps taken 
//from the closest diagonal point ((x,x) or (y,y)).

int coverPoints(vector<int> &X, vector<int> &Y) {
    int size = X.size();
    int steps = 0;
    if (size < 2) return 0;
    for (int i = 1; i < size; i++) {
        int x = abs(X[i] - X[i-1]);
        int y = abs(Y[i] - Y[i-1]);
        int minxy = std::min(x,y);
        steps += minxy + x-minxy + y-minxy;
    }
    return steps;
}
