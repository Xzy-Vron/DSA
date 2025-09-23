class Solution {
    public int[] merge(int[] arr, int first, int mid, int last) {
        ArrayList<Integer> temp = new ArrayList<>();
        int left = first, right = mid+1;

        while (left<= mid && right<=last) {
            if (arr[left] <= arr[right]) {
                temp.add(arr[left]);
                left++;
            }else {
                temp.add(arr[right]);
                right++;
            }
        }
        while (left <= mid) {
            temp.add(arr[left]);
            left++;
        }
        while (right <= last) {
            temp.add(arr[right]);
            right++;
        }  

        for (int i =first; i<=last; i++) {
            arr[i] = temp.get(i-first);
        }
        return arr;
    }


    public void sort(int[] nums,int first, int last) {
        if (first >= last) return;
        
        int mid = (first + last)/2;

        sort(nums,first, mid);
        sort(nums,mid+1, last);
        
        merge(nums, first, mid, last);
        
    }
    public int[] sortArray(int[] nums) {
        sort(nums, 0, nums.length-1);
        return nums;
    }
}