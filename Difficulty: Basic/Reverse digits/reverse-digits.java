// User function Template for Java

class Solution {
    public int reverseDigits(int n) {
        // Code here
        int reverse =0;
        while (n > 0) {
            int remainder = n % 10;
             n = n / 10;
        
            reverse = (reverse * 10) + remainder;
        }
        return reverse;
    }
}