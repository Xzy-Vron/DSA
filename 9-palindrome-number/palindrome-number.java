class Solution {
    public boolean isPalindrome(int x) {
        int m = x ;
        int reverse = 0;
        while( x >0) {
            int remainder =  x  % 10;
            x  =  x  / 10;
            reverse = (reverse * 10) + remainder;
        }
        if (m == reverse) {
            return true;
        } else {
            return false;
        }
    }
}