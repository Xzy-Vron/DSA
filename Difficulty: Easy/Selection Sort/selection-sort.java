class Solution {
    void selectionSort(int[] arr) {
        // code here
        for (int i =0; i<arr.length-1; i++) {
            int smallestIndex = i;
            for (int j =i; j<arr.length; j++) {
                if (arr[smallestIndex] > arr[j]) {
                    smallestIndex = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[smallestIndex];
            arr[smallestIndex] = temp;
        }
    }
}