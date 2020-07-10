import java.util.*;

class Solution {
    static int[] answer(int[] arr) {
        Arrays.sort(arr);
        int required = 3;
        int[] newArr = new int[required];
        for (int i = 0; i < required; i++) {
            newArr[i] = arr[arr.length - (i + 1)];
        }
        return newArr;
    }

    public static void main(String[] args) {
        int[] arr = new int[] { 23, 54, 68, 22, 13 };
        int[] result = answer(arr);
        for (int i : result) {
            System.out.println(i);
        }
    }
}