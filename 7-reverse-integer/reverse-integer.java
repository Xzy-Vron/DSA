class Solution {
    public int reverse(int x) {
        int reverse = 0;
        boolean isNegative = x < 0;
        String absoluteString = String.valueOf(Math.abs(x));
        StringBuilder sb = new StringBuilder(absoluteString).reverse();

        try {
            reverse = Integer.parseInt(sb.toString());
        } catch (NumberFormatException e) {
            return 0;
        }
        return isNegative ? -reverse : reverse;
    }
}