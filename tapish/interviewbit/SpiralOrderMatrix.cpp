//Problem link - https://www.interviewbit.com/problems/spiral-order-matrix-i/
//Algo link - https://www.youtube.com/watch?v=siKFOI8PNKM
vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
	vector<int> result;
	// DO STUFF HERE AND POPULATE result
	int dir = 0;
	int T = 0, L = 0;
	int B = A.size() - 1, R = A[0].size() - 1;
	while (T <= B && L <= R) {
	    switch (dir) {
	        case 0 : 
	        for (int i = L; i <= R; i++) {
	            result.push_back(A[T][i]);
	        }
	        T++;
	        dir = 1;
	        break;
	        case 1:
	        for (int i = T; i <= B; i++) {
	            result.push_back(A[i][R]);
	        }
	        R--;
	        dir = 2;
	        break;
	        case 2:
	        for (int i = R; i >= L; i--) {
	            result.push_back(A[B][i]);
	        }
	        B--;
	        dir = 3;
	        break;
	        case 3:
	        for(int i = B; i >= T; i--) {
	            result.push_back(A[i][L]);
	        }
	        L++;
	        dir = 0;
	        break;
	    }
	}
	
	return result;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
