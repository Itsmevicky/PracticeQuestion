public class Solution2 {

    static void reverseString(char str[], int start, int end) {
        if (start <= end)
            return;

        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        reverseString(str, start + 1, end - 1);
    }

    public static void main(String[] args) {
        String s = "Anuranjan";
        char arr[] = s.toCharArray();
        reverseString(arr, 0, arr.length - 1);
    }
}