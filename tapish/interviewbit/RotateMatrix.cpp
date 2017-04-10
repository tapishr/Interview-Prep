//https://www.interviewbit.com/problems/rotate-matrix/
//Time - O(n), Space - O(1)
//Get the top left, top right, bottom right and bottom left corners and exchange them with each other.
//Then move forward in this circle (top left goes to its left element, top right to the element below it, 
//bottom right to its left element and bottom left to the element above it) and excahnge these elements with each other.
//After exchanging all the elements of outermost square, procced to inner square (by doing n -= 2;)
//Think about the spiral matrix printing problem while solving this

void rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long int size = A.size();
    long long int n = size;
    while (n > 1) {
        long long int tl_i = (size-n)/2, tl_j = (size-n)/2;
        long long int tr_i = (size-n)/2, tr_j = (size-n)/2 + n-1;
        long long int bl_i = (size-n)/2 + n-1, bl_j = (size-n)/2;
        long long int br_i = (size-n)/2 + n-1, br_j = (size-n)/2 + n-1;
        for (int c = 0; c < n-1; c++) {
            //Bottom left to top left
            long long int tmp1 = A[tl_i][tl_j];   
            A[tl_i][tl_j] = A[bl_i][bl_j];
            //Top left to top right
            long long int tmp2 = A[tr_i][tr_j];
            A[tr_i][tr_j] = tmp1;
            tmp1 = tmp2;
            //top right to bottom right
            tmp2 = A[br_i][br_j];
            A[br_i][br_j] = tmp1;
            //bottom right to bottom left
            A[bl_i][bl_j] = tmp2;
            
            tl_j++;
            tr_i++;
            br_j--;
            bl_i--;
        }
        n -= 2;
    }
}
