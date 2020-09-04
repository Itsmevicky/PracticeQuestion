import java.util.Scanner;

class reverseString{
    public static void main(String[] args){
        String arr[] = "My name is Vicky".split(" ");
        String ans = "";
        for (int i = arr.length - 1; i >= 0; i--){
            ans += arr[i] + " ";
        }
        System.out.println(ans.substring(0, ans.length() - 1));
    }
}