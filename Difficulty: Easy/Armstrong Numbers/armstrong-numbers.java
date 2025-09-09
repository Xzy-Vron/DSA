// User function Template for Java
class Solution {
    static boolean armstrongNumber(int n) {
        // code here
        int m = n;
        int armstrong = 0;
        while (n>0) {
           armstrong = armstrong + (int)Math.pow((n % 10), 3);
           n = n / 10;
        }
        
        if (m == armstrong) {
            return true;
        } else {
            return false;
        }
    }
}