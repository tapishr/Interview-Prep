//https://leetcode.com/problems/arranging-coins/
// Solve k(k+1)/2 = n in terms of k. Make adjustments for rounding errors and return (-b + sqrt(b^2 + 4ac))/2 
int arrangeCoins(int n) {
    long long int D = 1 + (long long int)8*n;
    int sqrtD = (int)sqrtl(D);
    return (-1 + sqrtD)/2;
}
