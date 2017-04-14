//https://www.interviewbit.com/problems/palindrome-string/
//check string from beginning and end simultaneously. If non alphanum characters are encountered, pass over them.
int isPalindrome(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int size = A.size();
    int i = 0;
    int j = size-1;
    while (j - i > 0) {
    
        while((j-i>0) && !((A[i] <= 'z' && A[i] >= 'a') || (A[i] <= '9' && A[i] >= '0'))) {
            if(A[i]<='Z' && A[i]>='A') {
                // cout<<"uppercase = "<<A[i]<<endl;
                A[i] -= 'Z'-'z';
            }
            else {
                i++;
            }
        }
        while((j-i>0) && !((A[j] <= 'z' && A[j] >= 'a') || (A[j] <= '9' && A[j] >= '0'))) {
            if(A[j]<='Z' && A[j]>='A') {
                // cout<<"uppercase = "<<A[i]<<endl;
                A[j] -= 'Z'-'z';
            }
            else {
                j--;
            }
        }
        
        
        if(A[i] != A[j]) {
            return 0;
        }
        i++; j--;
        
    }
    
    return 1;
}
