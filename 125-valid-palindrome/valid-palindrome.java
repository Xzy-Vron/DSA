class Solution {
    public boolean isPalindrome(String s) {
        StringBuilder newstr = new StringBuilder();
        for (char i : s.toCharArray()) {
            if (Character.isLetterOrDigit(i)) {
                newstr.append(Character.toLowerCase(i));
            }
        }
        int first = 0, last = newstr.length() -1;
        while (first < last) {
            if (newstr.charAt(first++) != newstr.charAt(last--))  return false;
        }
        return true;
    }
}