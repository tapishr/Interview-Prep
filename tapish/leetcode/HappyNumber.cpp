// https://leetcode.com/problems/happy-number/
// figure out the answer for single digit numbers(0 to 9) and reduce all other numbers (multiple digits) to single digits
bool isHappy(int n) {
    int sqarr[] = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81};
    int sum = 10;
    while (sum/10 > 0) {
        sum = 0;
        int expo = 1;
        while(n > 0) {
            sum += sqarr[n % 10];
            n /= 10;
            expo++;
        }
        n = sum;
        cout<<sum<<endl;
    }
    if (sum == 1 || sum == 7) {
        return true;
    }
    else {
        return false;
    }
}
