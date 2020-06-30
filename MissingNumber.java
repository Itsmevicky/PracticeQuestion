import java.util.Scanner;

class MissingNumber {
    public static void main(final String[] args) {
        final Scanner scan = new Scanner(System.in);
        final int num = scan.nextInt();
        final int[] arr = new int[num];
        int sum = 0;
        for (int i = 0; i < arr.length - 1; i++) {
            arr[i] = scan.nextInt();
        }
        sum = num * (num + 1) / 2;
        for (int i = 0; i < arr.length; i++) {
            sum -= arr[i];
        }
        System.out.println(sum);

        scan.close();
    }
}